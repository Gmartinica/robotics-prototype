#!/usr/bin/env python3

# make sure that you start ServerListener.py process on odroid first before running this script!

import sys
import click
import time
import os
import subprocess
import re
from RoverCommander import RoverCommander

# returns current time in milliseconds
currentMillis = lambda: int(round(time.time() * 1000))

# get original delay and refresh, in case not 500, 33
def getOriginalDelayAndRefresh():
    if os.name == "posix":
        xsetOutput = subprocess.run(['xset', '-q'], stdout=subprocess.PIPE)
        xsetConfig = xsetOutput.stdout.decode()
        lines = xsetConfig.splitlines() # delimit by newline into array
        delayAndRefreshStr = "empty"

        # get the specific line we are looking for
        for line in lines:
            if "delay" in line:
                delayAndRefreshStr = line

        xsetVals = re.findall(r'\d+', delayAndRefreshStr)
        originalDelay = xsetVals[0]
        originalRefresh = xsetVals[1]

        #setX = 'xset r rate ' + str(TARGET_DELAY) + ' ' + str(TARGET_REFRESH)
        #subprocess.Popen(setX.split())

        return (originalDelay, originalRefresh)

# set delay and refresh rate using UNIX xset
def setX(delay, refresh):
    setXCmd = 'xset r rate ' + str(delay) + ' ' + str(refresh)
    print("\nSetting delay rate to {} and refresh rate to {} ...".format(delay, refresh))
    subprocess.Popen(setXCmd.split())

# use xset to set refresh/delay rates of keyboard input to something reasonable
TARGET_DELAY = 100
TARGET_REFRESH = 60
# these values are default on ubuntu 16.04
originalDelay = 500
originalRefresh = 33
# get original xset delay and refresh values
originalXsetVals = getOriginalDelayAndRefresh()
originalDelay = originalXsetVals[0]
originalRefresh = originalXsetVals[1]

# for controlling command throughput
lastCmdSent = 0
THROTTLE_TIME = 100

setX(TARGET_DELAY, TARGET_REFRESH)
rover_commander = RoverCommander()
speed_percent = 50 # set to half max speed by default

print("Ready for sending drive commands!\n")

while True:
    try:
        key = click.getchar()

        if currentMillis() - lastCmdSent > THROTTLE_TIME:
            # for debugging
            #print("waited {} milliseconds to move".format(currentMillis() - lastCmdSent))
            if key == 'w':
                print("Sending key: " + key)
                print('BUDGE FORWARD')
                rover_commander.budge_forward(speed_percent)
                lastCmdSent = currentMillis()
            elif key == 'a':
                print("Sending key: " + key)
                print('ROTATE LEFT')
                rover_commander.rotate_left(speed_percent)
                lastCmdSent = currentMillis()
            elif key == 's':
                print("Sending key: " + key)
                print('BUDGE BACKWARD')
                rover_commander.budge_backward(speed_percent)
                lastCmdSent = currentMillis()
            elif key == 'd':
                print("Sending key: " + key)
                print('ROTATE RIGHT')
                rover_commander.rotate_right(speed_percent)
                lastCmdSent = currentMillis()
            elif key == ' ':
                print("Sending key: " + key)
                print('STOP')
                rover_commander.stop()
                lastCmdSent = currentMillis()
            elif key == 'o':
                print("Sending key: " + key)
                print('OPEN LOOP')
                rover_commander.client_request('open-loop')
                lastCmdSent = currentMillis()
            elif key == 'c':
                print("Sending key: " + key)
                print('CLOSED LOOP')
                rover_commander.client_request('close-loop')
                lastCmdSent = currentMillis()
            elif key == '1': # activate rover MCU
                print("Sending key: " + key)
                print('ACTIVATE')
                rover_commander.activate()
                lastCmdSent = currentMillis()
            elif key == '0': # deactivate rover MCU
                print("Sending key: " + key)
                print('DEACTIVATE')
                rover_commander.deactivate()
                lastCmdSent = currentMillis()
            elif key == 'p':
                print('CHANGE PERCENT SPEED')
                print('Currently set to: ', speed_percent)
                new_speed = input('Change speed percent to: ')
                if RoverCommander.is_valid_percent(int(new_speed)):
                    print('Setting current speed to: ', new_speed)
                    speed_percent = int(new_speed)
            elif key == 'q':

                print("\nTerminating connection.")
                #print("Resetting delay rate back to {} and refresh rate back to {}".format(originalDelay, originalRefresh))
                setX(originalDelay, originalRefresh)
                break

            # wait till receive a response
            #(feedback, addr) = mySocket.recvfrom(SIZE)

            #if feedback:
            #    print(feedback.decode())

    except Exception as e:
        print('e', e)
        setX(originalDelay, originalRefresh)
        break