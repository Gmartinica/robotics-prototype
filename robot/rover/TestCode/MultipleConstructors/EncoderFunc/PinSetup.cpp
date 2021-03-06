#include <Arduino.h>
#include "PinSetup.h"

void pinSetup(void) {
  pinMode(LED_BUILTIN, OUTPUT); // pin 13

  // stepper motor

  pinMode(M1_ENABLE_PIN, OUTPUT);
  digitalWrite(M1_ENABLE_PIN, HIGH); // cut power
  pinMode(M1_DIR_PIN, OUTPUT);
  pinMode(M1_STEP_PIN, OUTPUT);
  pinMode(M1_ENCODER_A, INPUT_PULLUP);
  pinMode(M1_ENCODER_B, INPUT_PULLUP);
  pinMode(M1_LIMIT_SW_CW, INPUT_PULLUP);
  pinMode(M1_LIMIT_SW_CCW, INPUT_PULLUP);

  pinMode(M3_ENABLE_PIN, OUTPUT);
  digitalWrite(M3_ENABLE_PIN, HIGH); // cut power
  pinMode(M3_DIR_PIN, OUTPUT);
  pinMode(M3_STEP_PIN, OUTPUT);
  pinMode(M3_ENCODER_A, INPUT_PULLUP);
  pinMode(M3_ENCODER_B, INPUT_PULLUP);
  pinMode(M3_LIMIT_SW_FLEX, INPUT_PULLUP);
  pinMode(M3_LIMIT_SW_EXTEND, INPUT_PULLUP);

  pinMode(M4_ENABLE_PIN, OUTPUT);
  digitalWrite(M4_ENABLE_PIN, HIGH); // cut power
  pinMode(M4_DIR_PIN, OUTPUT);
  pinMode(M4_STEP_PIN, OUTPUT);
  pinMode(M4_ENCODER_A, INPUT_PULLUP);
  pinMode(M4_ENCODER_B, INPUT_PULLUP);
  pinMode(M4_LIMIT_SW_FLEX, INPUT_PULLUP);
  pinMode(M4_LIMIT_SW_EXTEND, INPUT_PULLUP);

  // DC motor

  pinMode(M2_PWM_PIN, OUTPUT);
  pinMode(M2_DIR_PIN, OUTPUT); // for new driver
  //analogWrite(M2_PWM_PIN, DC_STOP); // for sabertooth
  //pinMode(M2_UART_TX, OUTPUT); // for sabertooth
  //pinMode(M2_UART_RX, INPUT); // for sabertooth
  pinMode(M2_ENCODER_A, INPUT_PULLUP);
  pinMode(M2_ENCODER_B, INPUT_PULLUP);
  pinMode(M2_LIMIT_SW_FLEX, INPUT_PULLUP);
  pinMode(M2_LIMIT_SW_EXTEND, INPUT_PULLUP);

  // servos

  pinMode(M5_PWM_PIN, OUTPUT);
  analogWrite(M5_PWM_PIN, SERVO_STOP);
  /*
    pinMode(M5_ENCODER_A, INPUT_PULLUP);
    pinMode(M5_ENCODER_B, INPUT_PULLUP);
  */

  pinMode(M6_PWM_PIN, OUTPUT);
  analogWrite(M6_PWM_PIN, SERVO_STOP);
  /*
    pinMode(M6_ENCODER_A, INPUT_PULLUP);
    pinMode(M6_ENCODER_B, INPUT_PULLUP);
  */

}
