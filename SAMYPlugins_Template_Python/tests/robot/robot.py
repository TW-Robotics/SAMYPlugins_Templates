
import logging
import os
import sys
import time
PACKAGE_PARENT = '..'
SCRIPT_DIR = os.path.dirname(os.path.realpath(os.path.join(os.getcwd(), os.path.expanduser(__file__))))
sys.path.append(os.path.normpath(os.path.join(SCRIPT_DIR, PACKAGE_PARENT)))

from pubsub import pub
import samyplugin.CRCL_DataTypes

class Robot(object):
    # This class represents the robot.

    def __init__(self, host):
        # create a logger for the robot object
        self.logger = logging.getLogger(__name__)
        self.logger.setLevel(logging.INFO)
        fh = logging.StreamHandler()
        fh.setFormatter(logging.Formatter("%(levelname)s %(filename)s - %(message)s"))
        self.logger.addHandler(fh)
        self.host = host

        # Subscribe to the CRCL command topics
        pub.subscribe(self.example, "MoveTo")
        pub.subscribe(self.example2, "SetEndeffector")


    # Add robot specific methods here:

    def example(self, data):
        self.logger.info("\nGot command:")
        self.logger.info(data)
        pub.sendMessage("command_hold")
        #time.sleep(2)
        #try:
        self.logger.info("Running command")
        #Unkommentthislinetotesttheerrorhandler
        #pub.sendMessage("command_reset")
        #except:
        #    pub.sendMessage("command_error")

    def example2(self, data):
        self.logger.info("Got command SetEndeffector")
        camera_pose = samyplugin.CRCL_DataTypes.CRCL_PoseDataType()
        camera_pose.point.x = 100
        
        pub.sendMessage("write_information_source", name="GripperOpen", data=True);
        pub.sendMessage("write_information_source", name="CameraBased_Pose_UR5", data=camera_pose);
        self.logger.info(data)
