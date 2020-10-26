// Adafruit Motor shield library
// copyright Adafruit Industries LLC, 2009
// this code is public domain, enjoy!

//All 6 analog input pins are available. They can also be used as digital pins (pins #14 thru 19)
//
//Digital pin 2, and 13 are not used.
//
//The following pins are in use only if the DC/Stepper noted is in use:
//Digital pin 11: DC Motor #1 / Stepper #1 (activation/speed control)
//Digital pin 3: DC Motor #2 / Stepper #1 (activation/speed control)
//Digital pin 5: DC Motor #3 / Stepper #2 (activation/speed control)
//Digital pin 6: DC Motor #4 / Stepper #2 (activation/speed control)
//
//The following pins are in use if any DC/steppers are used
//Digital pin 4, 7, 8 and 12 are used to drive the DC/Stepper motors via the 74HC595 serial-to-parallel latch
//
//The following pins are used only if that particular servo is in use:
//Digitals pin 9: Servo #1 control
//Digital pin 10: Servo #2 control


#include <AFMotor.h>

#define triggerPin 2
int ++ = 0;

#define movePin 13
int moveInput = 0;

// Connect a stepper motor with 48 steps per revolution (7.5 degree)
// to motor port #2 (M3 and M4)
AF_Stepper motor(200, 2);

void setup() {
  Serial.begin(9600);           // set up Serial library at 9600 bps
  Serial.println("Stepper test!");
  motor.setSpeed(100);  // 10 rpm
}

void loop() {
  //
  triggerInput = digitalRead(triggerPin);
  Serial.println(triggerInput);
  if (triggerInput == HIGH)
  {
    Serial.println("Triggering");
    motor.step(57, BACKWARD, MICROSTEP);
    delay(300);
  }

  moveInput = digitalRead(movePin);
  if (moveInput == HIGH)
  { motor.step(1, BACKWARD, MICROSTEP);
    Serial.println("Moving");
    delay(60);
  }

}
