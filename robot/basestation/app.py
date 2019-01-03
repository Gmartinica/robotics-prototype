#!/usr/bin/env python3
"""This is the controller page of the Flask GUI
Flask is light-weight and modular so this is actually all we need to set up a simple HTML page"""

import re
import os
import subprocess
import flask
from flask import jsonify

app = flask.Flask(__name__)

# get rover's IP from global bash environment
rover_ip = os.environ["ROS_MASTER_URI"]
rover_ip = re.findall(r"(.*):\d+", rover_ip)[0]
#print("rover_ip: " + rover_ip)

rover_ip_raw = rover_ip.split("//")[1]

def run_bash(cmd):
    """Runs bash command supplied as string,
    executes it and returns tuple of output and error
    """
    process = subprocess.Popen(cmd.split(), stdout=subprocess.PIPE)
    output, error = process.communicate()

    return output, error

# Once we launch this, this will route us to the "/" page or index page and
# automatically render the Robot GUI
@app.route("/")
def index():
    """Current Landing page, the arm panel"""

    global rover_ip, rover_ip_raw

    # get rover's IP from global bash environment
    rover_ip = os.environ["ROS_MASTER_URI"]
    rover_ip = re.findall(r"(.*):\d+", rover_ip)[0]
    #print("rover_ip: " + rover_ip)

    rover_ip_raw = rover_ip.split("//")[1]
    #print("rover_ip_raw: " + rover_ip_raw)

    return flask.render_template("AsimovOperation.html", roverIP=rover_ip)

# Ping Request
@app.route("/ping_rover")
def ping_rover():
    """Ping rover first directly with unix ping command,
       then using ros ping_acknowledgment service.
       Send results to frontend to write to console log."""

    ping_output, error = run_bash("ping -c 1 " + rover_ip_raw)
    ping_output = ping_output.decode()

    print("Output: " + ping_output)

    if "Destination Net Unreachable" in ping_output:
        error_msg = "Basestation has no connection to network, aborting ROS ping."
        return jsonify(success=False, ping_msg=ping_output, ros_msg=error_msg)

    if "Destination Host Unreachable" in ping_output:
        error_msg = "Rover has no connection to network, aborting ROS ping."
        return jsonify(success=False, ping_msg=ping_output, ros_msg=error_msg)

    if error:
        print("Error: " + error.decode())

    ros_output, error = run_bash("rosrun ping_acknowledgment ping_response_client.py hello")
    ros_output = ros_output.decode()

    print("Pinging rover")
    print("Output: " + ros_output)

    if error:
        print("Error: " + error.decode())

    return jsonify(success=True, ping_msg=ping_output, ros_msg=ros_output)

# Automatic controls
@app.route("/click_btn_pitch_up")
def click_pitch_up():
    print("click_btn_pitch_up")
    return ""

@app.route("/click_btn_pitch_down")
def click_btn_pitch_down():
    print("click_btn_pitch_down")
    return ""

@app.route("/click_btn_roll_left")
def click_btn_roll_left():
    print("click_btn_roll_left")
    return ""

@app.route("/click_btn_roll_right")
def click_btn_roll_right():
    print("click_btn_roll_right")
    return ""

@app.route("/click_btn_claw_open")
def click_btn_claw_open():
    print("click_btn_claw_open")
    return ""

@app.route("/click_btn_claw_close")
def click_btn_claw_close():
    print("click_btn_claw_close")
    return ""

@app.route("/click_btn_arm_up")
def click_btn_arm_up():
    print("click_btn_arm_up")
    return ""

@app.route("/click_btn_arm_down")
def click_btn_arm_down():
    print("click_btn_arm_down")
    return ""

@app.route("/click_btn_arm_left")
def click_btn_arm_left():
    print("click_btn_arm_left")
    return ""

@app.route("/click_btn_arm_right")
def click_btn_arm_right():
    print("click_btn_arm_right")
    return ""

@app.route("/click_btn_arm_back")
def click_btn_arm_back():
    print("click_btn_arm_back")
    return ""

@app.route("/click_btn_arm_forward")
def click_btn_arm_forward():
    print("click_btn_arm_forward")
    return ""

# Manual controls
@app.route("/click_btn_motor1_ccw")
def click_btn_motor1_ccw():
    print("click_btn_motor1_ccw")
    return ""

@app.route("/click_btn_motor1_cw")
def click_btn_motor1_cw():
    print("click_btn_motor1_cw")
    return ""

@app.route("/click_btn_motor2_ccw")
def click_btn_motor2_ccw():
    print("click_btn_motor2_ccw")
    return ""

@app.route("/click_btn_motor2_cw")
def click_btn_motor2_cw():
    print("click_btn_motor2_cw")
    return ""

@app.route("/click_btn_motor3_ccw")
def click_btn_motor3_ccw():
    print("click_btn_motor3_ccw")
    return ""

@app.route("/click_btn_motor3_cw")
def click_btn_motor3_cw():
    print("click_btn_motor3_cw")
    return ""

@app.route("/click_btn_motor4_ccw")
def click_btn_motor4_ccw():
    print("click_btn_motor4_ccw")
    return ""

@app.route("/click_btn_motor4_cw")
def click_btn_motor4_cw():
    print("click_btn_motor4_cw")
    return ""

@app.route("/click_btn_motor5_ccw")
def click_btn_motor5_ccw():
    print("click_btn_motor5_ccw")
    return ""

@app.route("/click_btn_motor5_cw")
def click_btn_motor5_cw():
    print("click_btn_motor5_cw")
    return ""

@app.route("/click_btn_motor6_ccw")
def click_btn_motor6_ccw():
    print("click_btn_motor6_ccw")
    return ""

@app.route("/click_btn_motor6_cw")
def click_btn_motor6_cw():
    print("click_btn_motor6_cw")
    return ""

app.run(
    debug=True
)
# add param `host= '0.0.0.0'` if you want to run on your machine's IP address
