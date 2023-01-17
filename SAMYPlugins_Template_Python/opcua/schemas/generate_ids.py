import os
import datetime
BASE_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))

if __name__ == "__main__":
    inputfile = open(os.path.join(BASE_DIR, "schemas", "UA-Nodeset-master", "Schema", "NodeIds.csv"))
    outputfile = open(os.path.join(BASE_DIR, "opcua", "ua", "object_ids.py"), "w")
    outputfile.write(f"#AUTOGENERATED!!!\n")
    outputfile.write("\n")
    outputfile.write("from enum import IntEnum\n")
    outputfile.write("\n")
    # Making ObjectIds inherit IntEnum has a huge performance impact!!!!!
    # so we use a normal class and a reverse one for the few places we need it
    outputfile.write("class ObjectIds(object):\n")
    outputfile.write("    Null = 0\n")
    for line in inputfile:
        name, nb, datatype = line.split(",")
        outputfile.write("    {0} = {1}\n".format(name, nb))
    inputfile.close()
    inputfile = open(os.path.join(BASE_DIR, "schemas", "UA-Nodeset-master", "Schema", "NodeIds.csv"))
    outputfile.write("\n\nObjectIdNames = {}\n")
    outputfile.write("ObjectIdNames[0] = 'Null'\n".format(nb, name))
    for line in inputfile:
        name, nb, datatype = line.split(",")
        outputfile.write("ObjectIdNames[{0}] = '{1}'\n".format(nb, name))

    inputfile = open(os.path.join(BASE_DIR, "schemas", "UA-Nodeset-master", "Schema", "AttributeIds.csv"))
    outputfile = open(os.path.join(BASE_DIR, "opcua", "ua", "attribute_ids.py"), "w")
    outputfile.write(f"#AUTOGENERATED!!! Date: {datetime.datetime.now()}\n")
    outputfile.write("\n")
    outputfile.write("from enum import IntEnum\n")
    outputfile.write("\n")
    outputfile.write("class AttributeIds(IntEnum):\n")
    for line in inputfile:
        name, nb = line.split(",")
        outputfile.write("    {0} = {1}\n".format(name.strip(), nb.strip()))

    print("generate done!")