
from robot import Robot
from samyplugin import Plugin

# Interface python3 main.py -IP SAMYCore- -Plugin Port- -IP Robot- -PluginName-

if __name__ == "__main__":

    plugin_object = Plugin()
    robot_object = Robot("1234")

    plugin_object.connect_to_core("10.0.0.32", 4840)
    plugin_object.get_information_source_nodes()
    plugin_object.subscribe_to_core("TestRobot")

    plugin_object.disconnect_core()
