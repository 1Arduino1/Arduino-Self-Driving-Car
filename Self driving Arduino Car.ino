#include <Servo.h>
Servo pingservo;
int ping = 2;
int pingrec = A0;
int motor1pin1 = A1;
int motor1pin2 = A2;
int motor2pin1 = A3;
int motor2pin2 = A4;
int led = LED_BUILTIN;
void setup() {
   pingservo.attach(3);
   pinMode(ping, OUTPUT);
   pinMode(pingrec, INPUT);
   pinMode(motor1pin1, OUTPUT);
   pinMode(motor1pin2, OUTPUT);
   pinMode(motor2pin1, OUTPUT);
   pinMode(motor2pin2, OUTPUT);
   pinMode(led, OUTPUT);
   start();
}
void start() {
  delay(5);
  digitalWrite(led, HIGH);
  delay(2000);
  digitalWrite(led, LOW);
  delay(3);
}
void loop() {
    
}
void ultrasonic() {
  
}
//this code is designed for the Arduino UNO.
//beware this code is not done yet.
