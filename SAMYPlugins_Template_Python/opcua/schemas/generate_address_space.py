"""
Generate address space c++ code from xml file specification
xmlparser.py is a requirement. it is in opcua folder but to avoid importing all code, developer can link xmlparser.py in current directory
"""
import sys
import os
import datetime
import logging
# sys.path.insert(0, "..")  # load local freeopcua implementation
#from opcua import xmlparser
import opcua.common.xmlparser as xmlparser

BASE_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))

def _to_val(objs, attr, val):
    from opcua import ua
    cls = getattr(ua, objs[0])
    for o in objs[1:]:
        cls = getattr(ua, _get_uatype_name(cls, o))
    if cls == ua.NodeId:
        return f"NodeId.from_string('{val}')"
    return ua_type_to_python(val, _get_uatype_name(cls, attr))


def _get_uatype_name(cls, attname):
    for name, uat in cls.ua_types:
        if name == attname:
            return uat
    raise Exception(f"Could not find attribute {attname} in obj {cls}")


def ua_type_to_python(val, uatype):
    if uatype == "String":
        return f"'{val}'"
    elif uatype in ("Bytes", "Bytes", "ByteString", "ByteArray"):
        return f"b'{val}'"
    else:
        return val


def bname_code(string):
    if ":" in string:
        idx, name = string.split(":", 1)
    else:
        idx = 0
        name = string
    return f"QualifiedName('{name}', {idx})"


def nodeid_code(string):
    l = string.split(";")
    identifier = None
    namespace = 0
    ntype = None
    srv = None
    nsu = None
    for el in l:
        if not el:
            continue
        k, v = el.split("=", 1)
        k = k.strip()
        v = v.strip()
        if k == "ns":
            namespace = v
        elif k == "i":
            ntype = "NumericNodeId"
            identifier = v
        elif k == "s":
            ntype = "StringNodeId"
            identifier = f"'{v}'"
        elif k == "g":
            ntype = "GuidNodeId"
            identifier = f"b'{v}'"
        elif k == "b":
            ntype = "ByteStringNodeId"
            identifier = f"b'{v}'"
        elif k == "srv":
            srv = v
        elif k == "nsu":
            nsu = v
    if identifier is None:
        raise Exception("Could not find identifier in string: " + string)
    return f"{ntype}({identifier}, {namespace})"


class CodeGenerator:

    def __init__(self, input_path, output_path):
        self.input_path = input_path
        self.output_path = output_path
        self.output_file = None
        self.part = self.input_path.split(".")[-2]
        self.parser = None

    def run(self):
        sys.stderr.write(f"Generating Python code {self.output_path} for XML file {self.input_path}\n")
        self.output_file = open(self.output_path, 'w', encoding='utf-8')
        self.make_header()
        self.parser = xmlparser.XMLParser(self.input_path)
        for node in self.parser.get_node_datas():
            if node.nodetype == 'UAObject':
                self.make_object_code(node)
            elif node.nodetype == 'UAObjectType':
                self.make_object_type_code(node)
            elif node.nodetype == 'UAVariable':
                self.make_variable_code(node)
            elif node.nodetype == 'UAVariableType':
                self.make_variable_type_code(node)
            elif node.nodetype == 'UAReferenceType':
                self.make_reference_code(node)
            elif node.nodetype == 'UADataType':
                self.make_datatype_code(node)
            elif node.nodetype == 'UAMethod':
                self.make_method_code(node)
            else:
                sys.stderr.write(f"Not implemented node type: {node.nodetype}\n")
        self.output_file.close()

    def writecode(self, *args):
        self.output_file.write(f'{" ".join(args)}\n')

    def make_header(self, ):
        self.writecode(f'''
# -*- coding: utf-8 -*-
"""
DO NOT EDIT THIS FILE!
It is automatically generated from opcfoundation.org schemas. 
Date:{datetime.datetime.now()}
"""
import datetime
from dateutil.tz import tzutc

from opcua import ua
from opcua.ua import NodeId, QualifiedName, NumericNodeId, StringNodeId, GuidNodeId
from opcua.ua import NodeClass, LocalizedText


def create_standard_address_space_{self.part!s}(server):
  ''')

    def make_node_code(self, obj, indent):
        self.writecode(indent, 'node = ua.AddNodesItem()')
        self.writecode(indent, 'node.RequestedNewNodeId = {}'.format(nodeid_code(obj.nodeid)))
        self.writecode(indent, 'node.BrowseName = {}'.format(bname_code(obj.browsename)))
        self.writecode(indent, 'node.NodeClass = NodeClass.{0}'.format(obj.nodetype[2:]))
        if obj.parent and obj.parentlink:
            self.writecode(indent, 'node.ParentNodeId = {}'.format(nodeid_code(obj.parent)))
            self.writecode(indent, 'node.ReferenceTypeId = {0}'.format(self.to_ref_type(obj.parentlink)))
        if obj.typedef:
            self.writecode(indent, 'node.TypeDefinition = {}'.format(nodeid_code(obj.typedef)))

    def to_data_type(self, nodeid):
        if not nodeid:
            return "ua.NodeId(ua.ObjectIds.String)"
        if "=" in nodeid:
            return nodeid_code(nodeid)
        else:
            return f'ua.NodeId(ua.ObjectIds.{nodeid})'

    def to_ref_type(self, nodeid):
        if not "=" in nodeid:
            nodeid = self.parser.get_aliases()[nodeid]
        return nodeid_code(nodeid)

    def make_object_code(self, obj):
        indent = "   "
        self.writecode(indent)
        self.make_node_code(obj, indent)
        self.writecode(indent, 'attrs = ua.ObjectAttributes()')
        if obj.desc:
            self.writecode(indent, 'attrs.Description = LocalizedText("{0}")'.format(obj.desc))
        self.writecode(indent, 'attrs.DisplayName = LocalizedText("{0}")'.format(obj.displayname))
        self.writecode(indent, 'attrs.EventNotifier = {0}'.format(obj.eventnotifier))
        self.writecode(indent, 'node.NodeAttributes = attrs')
        self.writecode(indent, 'server.add_nodes([node])')
        self.make_refs_code(obj, indent)

    def make_object_type_code(self, obj):
        indent = "   "
        self.writecode(indent)
        self.make_node_code(obj, indent)
        self.writecode(indent, 'attrs = ua.ObjectTypeAttributes()')
        if obj.desc:
            self.writecode(indent, 'attrs.Description = LocalizedText("{0}")'.format(obj.desc))
        self.writecode(indent, 'attrs.DisplayName = LocalizedText("{0}")'.format(obj.displayname))
        self.writecode(indent, 'attrs.IsAbstract = {0}'.format(obj.abstract))
        self.writecode(indent, 'node.NodeAttributes = attrs')
        self.writecode(indent, 'server.add_nodes([node])')
        self.make_refs_code(obj, indent)

    def make_common_variable_code(self, indent, obj):
        if obj.desc:
            self.writecode(indent, 'attrs.Description = LocalizedText("{0}")'.format(obj.desc))
        self.writecode(indent, 'attrs.DisplayName = LocalizedText("{0}")'.format(obj.displayname))
        self.writecode(indent, 'attrs.DataType = {0}'.format(self.to_data_type(obj.datatype)))
        if obj.value is not None:
            if obj.valuetype == "ListOfExtensionObject":
                self.writecode(indent, 'value = []')
                for ext in obj.value:
                    self.make_ext_obj_code(indent, ext)
                    self.writecode(indent, 'value.append(extobj)')
                self.writecode(indent, 'attrs.Value = ua.Variant(value, ua.VariantType.ExtensionObject)')
            elif obj.valuetype == "ExtensionObject":
                self.make_ext_obj_code(indent, obj.value)
                self.writecode(indent, 'value = extobj')
                self.writecode(indent, 'attrs.Value = ua.Variant(value, ua.VariantType.ExtensionObject)')
            elif obj.valuetype == "ListOfLocalizedText":
                value = ['LocalizedText({0})'.format(repr(text)) for text in obj.value]
                self.writecode(indent, 'attrs.Value = [{}]'.format(','.join(value)))
            elif obj.valuetype == "LocalizedText":
                self.writecode(indent, 'attrs.Value = ua.Variant(LocalizedText("{0}"), ua.VariantType.LocalizedText)'.format(obj.value[1][1]))
            else:
                if obj.valuetype.startswith("ListOf"):
                    obj.valuetype = obj.valuetype[6:]
                self.writecode(
                    indent,
                    f'attrs.Value = ua.Variant({obj.value!r}, ua.VariantType.{obj.valuetype})'
            )
        if obj.rank:
            self.writecode(indent, f'attrs.ValueRank = {obj.rank}')
        if obj.accesslevel:
            self.writecode(indent, f'attrs.AccessLevel = {obj.accesslevel}')
        if obj.useraccesslevel:
            self.writecode(indent, f'attrs.UserAccessLevel = {obj.useraccesslevel}')
        if obj.dimensions:
            self.writecode(indent, f'attrs.ArrayDimensions = {obj.dimensions}')

    def make_ext_obj_code(self, indent, extobj):
        self.writecode(indent, f'extobj = ua.{extobj.objname}()')
        for name, val in extobj.body:
            for k, v in val:
                if type(v) is str:
                    val = _to_val([extobj.objname], k, v)
                    self.writecode(indent, f'extobj.{k} = {val}')
                else:
                    if k == "DataType":  #hack for strange nodeid xml format
                        self.writecode(indent, 'extobj.{0} = {1}'.format(k, nodeid_code(v[0][1])))
                        continue
                    if k == "ArrayDimensions":  # hack for v1.04 - Ignore UInt32 tag?
                        self.writecode(indent, 'extobj.ArrayDimensions = [{0}]'.format(v[0][1]))
                        continue
                    for k2, v2 in v:
                        val2 = _to_val([extobj.objname, k], k2, v2)
                        self.writecode(indent, f'extobj.{k}.{k2} = {val2}')

    def make_variable_code(self, obj):
        indent = "   "
        self.writecode(indent)
        self.make_node_code(obj, indent)
        self.writecode(indent, 'attrs = ua.VariableAttributes()')
        if obj.minsample:
            self.writecode(indent, f'attrs.MinimumSamplingInterval = {obj.minsample}')
        self.make_common_variable_code(indent, obj)
        self.writecode(indent, 'node.NodeAttributes = attrs')
        self.writecode(indent, 'server.add_nodes([node])')
        self.make_refs_code(obj, indent)

    def make_variable_type_code(self, obj):
        indent = "   "
        self.writecode(indent)
        self.make_node_code(obj, indent)
        self.writecode(indent, 'attrs = ua.VariableTypeAttributes()')
        if obj.desc:
            self.writecode(indent, 'attrs.Description = LocalizedText("{0}")'.format(obj.desc))
        self.writecode(indent, 'attrs.DisplayName = LocalizedText("{0}")'.format(obj.displayname))
        if obj.abstract:
            self.writecode(indent, f'attrs.IsAbstract = {obj.abstract}')
        self.make_common_variable_code(indent, obj)
        self.writecode(indent, 'node.NodeAttributes = attrs')
        self.writecode(indent, 'server.add_nodes([node])')
        self.make_refs_code(obj, indent)

    def make_method_code(self, obj):
        indent = "   "
        self.writecode(indent)
        self.make_node_code(obj, indent)
        self.writecode(indent, 'attrs = ua.MethodAttributes()')
        if obj.desc:
            self.writecode(indent, 'attrs.Description = LocalizedText("{0}")'.format(obj.desc))
        self.writecode(indent, 'attrs.DisplayName = LocalizedText("{0}")'.format(obj.displayname))
        self.writecode(indent, 'node.NodeAttributes = attrs')
        self.writecode(indent, 'server.add_nodes([node])')
        self.make_refs_code(obj, indent)

    def make_reference_code(self, obj):
        indent = "   "
        self.writecode(indent)
        self.make_node_code(obj, indent)
        self.writecode(indent, 'attrs = ua.ReferenceTypeAttributes()')
        if obj.desc:
            self.writecode(indent, 'attrs.Description = LocalizedText("{0}")'.format(obj.desc))
        self.writecode(indent, 'attrs.DisplayName = LocalizedText("{0}")'.format(obj.displayname))
        if obj. inversename:
            self.writecode(indent, 'attrs.InverseName = LocalizedText("{0}")'.format(obj.inversename))
        if obj.abstract:
            self.writecode(indent, f'attrs.IsAbstract = {obj.abstract}')
        if obj.symmetric:
            self.writecode(indent, f'attrs.Symmetric = {obj.symmetric}')
        self.writecode(indent, 'node.NodeAttributes = attrs')
        self.writecode(indent, 'server.add_nodes([node])')
        self.make_refs_code(obj, indent)

    def make_datatype_code(self, obj):
        indent = "   "
        self.writecode(indent)
        self.make_node_code(obj, indent)
        self.writecode(indent, 'attrs = ua.DataTypeAttributes()')
        if obj.desc:
            self.writecode(indent, u'attrs.Description = LocalizedText("{0}")'.format(obj.desc))
        self.writecode(indent, 'attrs.DisplayName = LocalizedText("{0}")'.format(obj.displayname))
        if obj.abstract:
            self.writecode(indent, f'attrs.IsAbstract = {obj.abstract}')
        self.writecode(indent, 'node.NodeAttributes = attrs')
        self.writecode(indent, 'server.add_nodes([node])')
        self.make_refs_code(obj, indent)

    def make_refs_code(self, obj, indent):
        if not obj.refs:
            return
        self.writecode(indent, "refs = []")
        for ref in obj.refs:
            self.writecode(indent, 'ref = ua.AddReferencesItem()')
            self.writecode(indent, 'ref.IsForward = {0}'.format(ref.forward))
            self.writecode(indent, 'ref.ReferenceTypeId = {0}'.format(self.to_ref_type(ref.reftype)))
            self.writecode(indent, 'ref.SourceNodeId = {0}'.format(nodeid_code(obj.nodeid)))
            self.writecode(indent, 'ref.TargetNodeClass = NodeClass.DataType')
            self.writecode(indent, 'ref.TargetNodeId = {0}'.format(nodeid_code(ref.target)))
            self.writecode(indent, "refs.append(ref)")
        self.writecode(indent, 'server.add_references(refs)')


def save_aspace_to_disk():
    path = os.path.join(BASE_DIR, 'opcua', 'binary_address_space.pickle')
    print('Saving standard address space to:', path)
    sys.path.append('..')
    from opcua.server.standard_address_space import standard_address_space
    from opcua.server.address_space import NodeManagementService, AddressSpace
    aspace = AddressSpace()
    standard_address_space.fill_address_space(NodeManagementService(aspace))
    aspace.dump(path)

def main():
    logging.basicConfig(level=logging.WARN)
    for i in (3, 4, 5, 8, 9, 10, 11, 12, 13, 14, 17, 19):
        xml_path = os.path.join(BASE_DIR, 'schemas', 'UA-Nodeset-master', 'Schema', f'Opc.Ua.NodeSet2.Part{i}.xml')
        py_path = os.path.join(BASE_DIR, 'opcua', 'server', 'standard_address_space', f'standard_address_space_part{i}.py')
        CodeGenerator(xml_path, py_path).run()
    save_aspace_to_disk()


if __name__ == '__main__':
    main()