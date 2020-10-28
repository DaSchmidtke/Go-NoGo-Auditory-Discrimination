// Adafruit Motor shield library
// copyright Adafruit Industries LLC, 2009
// this code is public domain, enjoy!

#include <AFMotor.h>

#define triggerPin 2
int ++ = 0;

#define movePin 13
int moveInput = 0;

// Connect a stepper motor with 200 steps per revolution (1.8 degree)
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
  if (triggerInput == HIGH)                 // If a trigger pulse is detected, the motor is activated
  {
    Serial.println("Triggering");           
    motor.step(57, BACKWARD, MICROSTEP);    // You may have to adapt the number of steps to your feeder
    delay(300);
  }

  moveInput = digitalRead(movePin);         // A button connected to the Arduino can be used to manually activate the motor for single steps for calibration purposes
  if (moveInput == HIGH)
  { motor.step(1, BACKWARD, MICROSTEP);
    Serial.println("Moving");
    delay(60);
  }

}
