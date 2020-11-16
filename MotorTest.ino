//**********************************//
//* Motor Test                     *//
//* for EEEBot                     *//
//*                                *//
//* UoN 2020                       *//
//**********************************//

// name the motor control pins
#define PWMa 7
#define PWMb 5
#define PWMc 8
#define PWMd 6

void setup() {
  // configure the motor control pins as outputs
  pinMode(PWMa, OUTPUT);
  pinMode(PWMb, OUTPUT);
  pinMode(PWMc, OUTPUT);
  pinMode(PWMd, OUTPUT);

}

void loop() {
  // forwards
  digitalWrite(PWMa, HIGH);
  digitalWrite(PWMb, LOW);
  digitalWrite(PWMc, HIGH);
  digitalWrite(PWMd, LOW);

  delay (2500);

  // backwards
  digitalWrite(PWMa, LOW);
  digitalWrite(PWMb, HIGH);
  digitalWrite(PWMc, LOW);
  digitalWrite(PWMd, HIGH);

  delay (2500);
  
  // clockwise
  digitalWrite(PWMa, LOW);
  digitalWrite(PWMb, HIGH);
  digitalWrite(PWMc, HIGH);
  digitalWrite(PWMd, LOW);
  
  delay (2500);
  
  // counter-clockwise
  digitalWrite(PWMa, HIGH);
  digitalWrite(PWMb, LOW);
  digitalWrite(PWMc, LOW);
  digitalWrite(PWMd, HIGH);
  
  delay (2500);
}
