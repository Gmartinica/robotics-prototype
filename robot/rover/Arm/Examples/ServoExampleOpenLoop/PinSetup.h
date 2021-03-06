#ifndef PINSETUP_H
#define PINSETUP_H

// pin constants defined in core_pins.h, pins_teensy.c, pins_arduino.h

#define NUM_MOTORS 1

#define MIN_JOINT_ANGLE -760 // min angle for all motors
#define MAX_JOINT_ANGLE 760 // max angle for all motors
#define SERVO_PID_PERIOD 20000 // 20ms, because typical pwm signals have 20ms periods

#define SERVO_STOP 1500 // millisecond count which actually stops servo as expected
//#define SERVO_STOP 189 // 3.3v // motor is supposed to stop at 50% duty cycle (127/255)

// servo
#define PWM_PIN         35
#define GEAR_RATIO      40.0/12.0 // there is a ratio here that I don't know yet
#define MINIMUM_ANGLE   -120.0
#define MAXIMUM_ANGLE   30.0

void pinSetup(void);

#endif
