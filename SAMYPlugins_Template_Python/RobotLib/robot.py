
import logging


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

    # Add robot specific methodes here:
