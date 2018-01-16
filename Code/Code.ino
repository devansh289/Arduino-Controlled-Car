const int motor1 = 5;         //motor1 and motor2 --> First motor
const int motor2 = 6;
const int motor3 = 8;        //motor3 and motor4 --> Second motor
const int motor4 = 9;
char command;

void setup()
{
  pinMode(motor1, OUTPUT);
  pinMode(motor2, OUTPUT);
  pinMode(motor3, OUTPUT);
  pinMode(motor4, OUTPUT);

  Serial.begin(9600);

}


void loop() {
  // Add while if problems
  if (Serial.available() > 0) {
    command = Serial.read();
    breaks();
    switch (command) {
      case 'F':
        forward();
        break;
      case 'B':
        reverse();
        break;
      case 'R':
        right();
        break;
      case 'L':
        left();
        break;
    }
  }
}


void forward() {
  digitalWrite(motor1, LOW);      //Forward
  digitalWrite(motor2, HIGH);
  digitalWrite(motor3 , LOW);
  digitalWrite(motor4 , HIGH);
  delay(1000);
  Serial.println("Forward Motion");
}

void reverse() {
  digitalWrite(motor1, HIGH);     //Backwards
  digitalWrite(motor2, LOW);
  digitalWrite(motor3, HIGH);
  digitalWrite(motor4, LOW);
  delay(1000);
  Serial.println("Reverse Motion");
}

void left() {
  digitalWrite(motor1, HIGH);      //Right
  digitalWrite(motor2, HIGH);
  digitalWrite(motor3, LOW);
  digitalWrite(motor4, HIGH);
  delay(1000);
  Serial.println("Right Motion");
}

void right() {
  digitalWrite(motor1, LOW);      //Left
  digitalWrite(motor2, HIGH);
  digitalWrite(motor3, HIGH);
  digitalWrite(motor4, HIGH);
  delay(1000);
  Serial.println("Left Motion");
}


void breaks() {
  digitalWrite(motor1, HIGH);      //Pause
  digitalWrite(motor2, HIGH);
  digitalWrite(motor3, HIGH);
  digitalWrite(motor4, HIGH);
  delay(1000);
  Serial.println("Breaks");
}
