from CRCLLib import crcl
from TransformLib import transform
from CRCL_DataTypes import *
import numpy
import time

class RobotUnits():
    def __init__(self):
        # self.orientation = "Quaternion" Unterschiedliche anzahl an parametern selbst konvertieren
        self.referencePoint = "RobotBase"
        self.lengthUnit = "mm"
        self.speedUnit = "mm/s"
        self.accelUnit = "mm/s^2"


def compare_pose(robot, x, y, z):
    robot.compare_pose(x, y, z)


def get_state(robot):
    return robot.get_state()


def set_mode(robot, command_id, mode):
    # Switch between live mode: commands get executed as soon as the arive
    # and buffered mode: commands get buffered and started with a seperat command.
    # mode = 1 -> live_mode
    # mode = 0 -> buffered_mode
    robot.set_mode(mode)


def get_end_effector(robot, command_id):
    # retruns true if the gripper is open false if it is closed
    return robot.get_gripper_state(command_id)


def set_workobject(robot, workobject_x, workobject_y, workobject_z,
                   workobject_xAxis_i, workobject_xAxis_j, workobject_xAxis_k,
                   workobject_zAxis_i, workobject_zAxis_j, workobject_zAxis_k):
    xaxis = numpy.array([workobject_xAxis_i, workobject_xAxis_j, workobject_xAxis_k])
    zaxis = numpy.array([workobject_zAxis_i, workobject_zAxis_j, workobject_zAxis_k])
    yaxis = numpy.cross(zaxis, xaxis)
    matrix = numpy.matrix([xaxis, yaxis, zaxis])
    axis_angle = transform.matrix_to_axis_angle(matrix)
    robot.robot_settings.workobject = ((workobject_x, workobject_y, workobject_z), axis_angle)
    print("Python: Workobject set")


######################## CRCL COMMANDS #################################

def init_canon_command(robot):
    robot.run_buffer()


def end_canon_command(robot):
    pass


def message_command(robot, command_id, message):
    # Message is a string that should be displayed by the robot controller.
    pass


def move_to_command(robot, commandID, moveStraight, end_position):
    crcl_point = crcl.PointType(end_position.point.x, end_position.point.y, end_position.point.z)
    crcl_u = crcl.VectorType(end_position.xAxis.i, end_position.xAxis.j, end_position.xAxis.k)
    crcl_v = crcl.VectorType(end_position.zAxis.i, end_position.zAxis.j, end.position.zAxis.k)
    pose_type = crcl.PoseType(crcl_point, crcl_u, crcl_v)
    pose = transform.get_pose_axis_angle(pose_type)
    str_pose = str(pose)
    if moveStraight:
        robot.movel(commandID, pose, robot.robot_settings.transAccel, robot.robot_settings.transSpeed, 0)
    else:
        robot.movej_p(robot, commandID, pose, robot.robot_settings.rotAccel, robot.robot_settings.rotSpeed, 0, 0)
    #robot.wait()
    #return str_pose


def move_screw_command(robot, command_id, start_position, axis_point,
                        axial_distance_free, axial_distance_screw, turn):
    pass


def move_through_to_command(robot, command_id, move_straight, waypoints, num_positions):
    x = 1
    if move_straight:
        for waypoint in waypoints:
            pose = transform.get_pose_axis_angle(waypoint)
            if x == num_positions:
                robot.rob.movel(command_id, pose, robot.transAccel, robot.transSpeed, 0)
            else:
                robot.rob.movel(command_id, pose, robot.robot_settings.transAccel, robot.robot_settings.transSpeed, robot.robot_settings.radius)
            x += 1
    else:
        for waypoint in waypoints:
            pose = transform.get_pose_axis_angle(waypoint)
            if x == num_positions:
                robot.rob.movej_p(command_id, pose, robot.transAccel, robot.transSpeed, 0, 0)
            else:
                robot.rob.movej_p(command_id, pose, robot.robot_settings.transAccel, robot.robot_settings.transSpeed, 0, robot.robot_settings.radius)
            x += 1


def dwell_command(robot, command_id, dwell_time):
    pass


def actuate_joints_command(robot, command_id, actuate_joint=[]):
    pass


def configure_joint_reports_command(robot, command_id, reset_all, configure_joint_report=[]):
    pass


def set_default_joint_positions_tolerance_command(robot, command_id,):
    pass


def get_status_command(robot, command_id):
    pass


def close_tool_changer_command(robot, command_id):
    pass


def open_tool_changer_command(robot, command_id):
    pass


def set_robot_parameters_command(robot, command_id, parameter_setting=[]):
    pass


def set_end_effector_parameters_command(robot, command_id, parameter_setting=[]):
    pass


def set_end_effector_command(robot, command_id, setting):
    if setting == 0:
        robot.close_gripper(command_id)
        print("EndEffector is false")
    else:
        robot.open_gripper(command_id)
        print("EndEffector is true")


def set_trans_accel_command(robot, command_id, trans_accel):
    robot.robot_settings.transAccel = trans_accel
    print("Python: Trans Accel set")


def set_trans_speed_command(robot, command_id, trans_speed):
    robot.robot_settings.transSpeed = trans_speed
    print("Python: Trans Speed set")


def set_rot_accel_command(robot, command_id, rot_accel):
    pass


def set_rot_speed_command(robot, command_id, rot_speed):
    pass


def set_angle_units_command(robot, command_id, unit_name):
    robot.angleUnit = unit_name
    print("Python: Angle units set")


def set_end_pose_tolerance_command(robot, command_id, tolerance):
    pass


def set_force_units_command(robot, command_id, unit_name):
    pass


def set_intermediate_pose_tolerance(robot, command_id, tolerance):
    pass


def set_length_unit_command(robot, command_id, unit_name):
    robot.lengthUnit = unit_name
    print("Python: Length unit set")


def set_motion_coordination_command(robot, command_id, coordinated):
    pass


def set_torque_units_command(robot, command_id, unit_name):
    pass


def stop_motion_command(robot, command_id, stop_condition):
    robot.stop_robot()


def configure_status_report_command(robot, command_id, report_joint_statuses
                                    report_pose_status, report_gripper_status,
                                    report_settings_status, report_sensors_status,
                                    report_guards_status):
    pass


def enable_sensor_command(robot, command_id, sensor_id, sensor_options):
    pass


def disable_sensor_command(robot, command_id, sensor_id):
    pass


def enable_gripper_command(robot, command_id, gripper_id, gripper_options):
    pass


def disable_gripper_command(robot, command_id, gripper_id):
    pass


def enable_robot_parameter_status_command(robot, command_id, enable_robot_parameter_name):
    pass


def disable_robot_parameter_status_command(robot, command_id, robot_parameter_id):
    pass
