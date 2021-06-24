import sys
import time
from IPython import embed

from samyrobot import SAMYRobot
from CRCL_DataTypes import *

from opcua.common.xmlexporter import XmlExporter
from opcua.common.type_dictionary_buider import DataTypeDictionaryBuilder, get_ua_class
from opcua import Client
from opcua import Server
from opcua import ua

from RobotLib import Robot

# Interace python3 main.py -IP SAMYCore- -Plugin Port- -IP Robot- -PluginName-

class Plugin():
    def __init__(self):#, robot):
        #self.robot = robot
        self.opcua_core_client = None
        self.opcua_server = None
        self.robot = None
        self.idx = None
        self.robot_node = None

######################### OPCUA SERVER SECTION #################################
    # Create OPCUA Server with node where SAMYCore can write the commands.
    def create_opcua_server(self):
        #try:
        self.opcua_server = Server()
        #self.opcua_server.import_xml(
        #    "OPCUA_CRCL/OPCUAModel/CRCL_test.xml")
        #print("XML import finished")
        self.opcua_server.load_type_definitions()
        self.opcua_server.set_endpoint("opc.tcp://0.0.0.0:4841/")
        self.opcua_server.set_server_name("SAMYPlugin")
        self.opcua_server.set_security_policy([ua.SecurityPolicyType.NoSecurity])
        uri = "http://opcfoundation.org/UA/"
        self.idx = self.opcua_server.register_namespace(uri)
        self.dict_builder = DataTypeDictionaryBuilder(
            self.opcua_server, self.idx, uri, 'MyDictionary')

        #except:
        #    print(sys.exc_info()[0])
        #    print("Creating the OPCUA server failed!!!")

    def start_opcua_server(self):
        self.opcua_server.start()

    def stop_opcua_server(self):
        self.opcua_server.stop()

    def create_structure(self, name):
        # save the created data type
        return self.dict_builder.create_data_type(name)

    def add_robot_to_server(self):
        # robot_struct_name = 'robot_struct'
        # robot_struct = self.create_structure(robot_struct_name)
        # robot_struct.add_field('robot', ua.SAMYRobotDataType)
        # self.opcua_server.complete_creation()
        # self.opcua_server.load_type_definitions()
        #
        # robot_var = self.opcua_server.server.nodes.objects.add_variable(
        #     ua.NodeId(namespaceidx=self.idx), "Robot",
        #     ua.Variant(None, ua.VariantType.Null),
        #     datatype=robot_struct.data_type)

        objects = self.opcua_server.get_objects_node()
        self.robot_node = objects.add_variable(
           self.idx, "robot", SAMYRobotDataType(),
           varianttype=ua.VariantType.ExtensionObject, datatype=2) # DataType is wrong
        # self.robot_node = objects.add_variable(
        #    ua.NodeId(namespaceidx=self.idx), "robot", ua.SAMYRobotDataType(),
        #    varianttype=ua.VariantType.ExtensionObject, datatype=15102)
        self.robot_node.set_writable()

    def subscribe_to_commands():
        pass

    def commands_callback():
        pass


######################### OPCUA SERVER SECTION END #############################

######################### OPCUA CLIENT SECTION #################################
    # Connect to SAMYCore opcua server to send status messages
    def connect_to_core(self):
        while True:
            try:
                # Create opcua client connection with SAMYCore
                print("Connecting to SAMYCore")
                address = ("opc.tcp://{}:{}").format(sys.argv[1], sys.argv[2])
                self.opcua_core_client = Client(address)
                self.opcua_core_client.connect()
                print("Connected to SAMYCore")
                break
            except:
                print("Connection with SAMYCore failed!!!!!\n Retry in 3 seconds....")
                time.sleep(3)
        # Get information about all nodes of SAMYCore opcua server
        self.opcua_core_client.load_type_definitions()

    def export_to_xml(self):
        root = self.opcua_core_client.get_root_node()
        objects = self.opcua_core_client.get_objects_node()
        exporter = XmlExporter(self.opcua_core_client)
        exporter.build_etree(objects.get_children, ['http://myua.org/test/'])
        exporter.write_xml('ua-export.xml')

######################### OPCUA CLIENT SECTION #################################

    def create_robot_object(self, host):
        self.robot = Robot(host)


if __name__ == "__main__":

    #robot = plugin.create_robot_object("172.17.0.3")
    plugin = Plugin()#(robot)

    try:
        plugin.connect_to_core()
        plugin.create_opcua_server()
        plugin.start_opcua_server()
        plugin.add_robot_to_server()
        #plugin.subscribe_to_commands()
        embed()
    finally:
        plugin.stop_opcua_server()
