//**********************************//
//* Bumper Car                     *//
//* for EEEBot                     *//
//*                                *//
//* UoN 2020                       *//
//**********************************//

// name the motor control pins
#define PWMa 8
#define PWMb 6
#define PWMc 5
#define PWMd 7

// name the bumper pins
#define LEFT 2
#define RIGHT 3

// define a limit value
#define LIMIT 1000

void setup() {
  // configure the motor control pins as outputs
  pinMode(PWMa, OUTPUT);
  pinMode(PWMb, OUTPUT);
  pinMode(PWMc, OUTPUT);
  pinMode(PWMd, OUTPUT);

  // configure the bumper pins as inputs with a pullup resistor active
  pinMode(LEFT, INPUT_PULLUP);
  pinMode(RIGHT, INPUT_PULLUP);
}

void loop() {
  if(!digitalRead(RIGHT))
  {
    // backwards
    digitalWrite(PWMa, HIGH);
    digitalWrite(PWMb, LOW);
    digitalWrite(PWMc, HIGH);
    digitalWrite(PWMd, LOW);
    
    delay(250);
    
    //Reverse Left
    digitalWrite(PWMa, LOW);
    digitalWrite(PWMb, LOW);
    digitalWrite(PWMc, HIGH);
    digitalWrite(PWMd, LOW);

    delay(500);
  }

  if(!digitalRead(LEFT))
  {
    // backwards
    digitalWrite(PWMa, HIGH);
    digitalWrite(PWMb, LOW);
    digitalWrite(PWMc, HIGH);
    digitalWrite(PWMd, LOW);
    
    delay(250);
    
    //Reverse Right
    digitalWrite(PWMa, HIGH);
    digitalWrite(PWMb, LOW);
    digitalWrite(PWMc, LOW);
    digitalWrite(PWMd, LOW);

    delay(500);
  }

  //forwards
  digitalWrite(PWMa, LOW);
  digitalWrite(PWMb, HIGH);
  digitalWrite(PWMc, LOW);
  digitalWrite(PWMd, HIGH);
}
