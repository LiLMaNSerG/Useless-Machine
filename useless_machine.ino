#include <Servo.h>

// Creates a Servo object
Servo myservo;

// Pin Definition
const int switchPin = 2;
const int servoPin = 9;

// Variable Definition
int switchState;
int lastSwitchState = LOW;
unsigned long lastDebounceTime = 0;
unsigned long debounceDelay = 50;

void setup() {
  pinMode(switchPin, INPUT);
  myservo.attach(servoPin);
  Serial.begin(9600);           // (Optional) For output debugging within the console.
  myservo.write(55);            // Initialize the servo to 55 degrees.
}

void loop() {
  int reading = digitalRead(switchPin);
  
  // A digital debounce which sets the state of the switch after allowing some time for stabilization.
  if (reading != lastSwitchState){
    lastDebounceTime = millis();
  }
  if ((millis() - lastDebounceTime) > debounceDelay){
    if (reading != switchState){
      switchState = reading;
      if (switchState == HIGH){
        Serial.print("Switch On\n");
        myservo.write(170);    // Activate the arm for disarming the switch.
        delay(1000);
        myservo.write(55);     // Return the arm.
        //delay(1000);
      }
    }  
  }
  lastSwitchState = reading;
}
