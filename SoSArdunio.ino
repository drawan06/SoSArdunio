
/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/
#include <Servo.h>

Servo myServo;
Servo leftLeg;
Servo leftFoot;
Servo rightLeg;
Servo rightFoot;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialze digital pin LED_BUITLTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  myServo.attach(11,1000,2000);
  myServo.write(90);
  leftLeg.attach(2,1000,2000);
  leftLeg.write(90);
  leftFoot.attach(4,1000,2000);
  leftFoot.write(90);
  rightLeg.attach(3,1000,2000);
  rightLeg.write(90);
  rightFoot.attach(5,1000,2000);
  rightFoot.write(90);

  // initialize      gital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  myServo.attach(11);
  myServo.write(90);
}
void takeStep(){
leftLeg.write(1);

}
void blinkOnce(int time){
digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
 myServo.write(90);
  delay(time);                      // wait for a second
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  myServo.write(50);
  delay(time);
}

// the loop function runs over and over again forever
void blinkSOS() {
  blinkOnce(50);
  blinkOnce(50);
  blinkOnce(50);
  blinkOnce(50);
  blinkOnce(50);
  blinkOnce(50);
  blinkOnce(50);
  blinkOnce(50);
  blinkOnce(50);
} 

void loop(){
  blinkSOS();
}



