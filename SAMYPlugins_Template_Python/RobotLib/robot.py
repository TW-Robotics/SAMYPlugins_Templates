
import logging
import os
import sys
import time
PACKAGE_PARENT = '..'
SCRIPT_DIR = os.path.dirname(os.path.realpath(os.path.join(os.getcwd(), os.path.expanduser(__file__))))
sys.path.append(os.path.normpath(os.path.join(SCRIPT_DIR, PACKAGE_PARENT)))

from pubsub import pub
import CRCL_DataTypes

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


    # Add robot specific methodes here:

    def example(self, data):
        print("\nGot command:")
        print(data)
        pub.sendMessage("command_hold")
        time.sleep(2)
        try:
            print("Running command")
            # Unkomment this line to test the error handler
            pub.sendMessage("command_reset")
        except:
            pub.sendMessage("command_error")

    def example2(self, data):
        print("Got command SetEndeffector")
        print(data)
