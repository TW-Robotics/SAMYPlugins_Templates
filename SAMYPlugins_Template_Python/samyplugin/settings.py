import yaml
import logging

class Settings():
    def __init__(self):
        self.logger = logging.getLogger(__name__)
        self.logger.setLevel(logging.INFO)
        log_handler = logging.StreamHandler()
        log_handler.setFormatter(logging.Formatter("%(levelname)s %(filename)s - %(message)s"))
        self.logger.addHandler(log_handler)

        self.settings_path = "/usr/src/samy/configFiles/"

    def set_settings_path(self, path:str):
        self.settings_path = path

    def load_robot_settings(self, robot_name):
        with open(self.settings_path + "RobotsConfiguration.yaml") as f:
            robot_config = yaml.load(f, yaml.Loader)
        for robot in robot_config["Robots"]:
            if robot["Robot"]["Name"] == robot_name:
                return robot["Robot"]
        self.logger.error("No Robot with this name in the settings file")
