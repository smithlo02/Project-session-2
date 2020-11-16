#include <NewPing.h> //The library used to interface with the sensor

#define trigPin 11
#define echoPin 10 //Defines the pins used for the trigger and echo
#define maxDist 400 //Defines the maximum distance to look for in cm

NewPing sonar(trigPin, echoPin, maxDist);
float duration, distance;

void setup() {
  Serial.begin(9600);
}

void loop() {
  duration = sonar.ping();
  distance = (duration / 2) * 0.0343;

  if (distance >= 400 || distance <= 2){
    Serial.println("Out of range");
  }
  else {
    Serial.print(distance);
    Serial.println(" cm");
  }
  delay(500);
}
