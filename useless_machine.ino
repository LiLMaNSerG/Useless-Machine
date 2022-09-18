#include <Servo.h>

// Create a Servo object
Servo myservo;

// Pin Definition
const int switchPin = 2;
const int servoPin = 9;

// Variable Definition
int switchState;
int lastSwitchState = LOW;
int pos = 0;
unsigned long lastDebounceTime = 0;
unsigned long debounceDelay = 50;

void setup() {
  // put your setup code here, to run once:
  pinMode(switchPin, INPUT);
  myservo.attach(servoPin);
  Serial.begin(9600);
  myservo.write(55);
}

void loop() {
  // put your main code here, to run repeatedly:
  int reading = digitalRead(switchPin);
  
  if (reading != lastSwitchState){
    lastDebounceTime = millis();
  }
  if ((millis() - lastDebounceTime) > debounceDelay){
    if (reading != switchState){
      switchState = reading;
      if (switchState == HIGH){
        Serial.print("Switch On\n");
        myservo.write(170);
        delay(1000);
        myservo.write(55);
        //delay(1000);
      }
    }  
  }
  lastSwitchState = reading;
}
