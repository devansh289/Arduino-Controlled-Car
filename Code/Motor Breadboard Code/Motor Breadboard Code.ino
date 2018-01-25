// Initalize variables for pins connecting to motor on Arduino
const int motor1 = 6;         //motor1 and motor2 --> First motor
const int motor2 = 7;
const int motor3 = 9;         //motor3 and motor4 --> Second motor
const int motor4 = 3;

// Initialize variable for storing the directional output.
char command;

void setup()
{
  // Declaring the pins as output to make them functinal
  pinMode(motor1, OUTPUT);
  pinMode(motor2, OUTPUT);
  pinMode(motor3, OUTPUT);
  pinMode(motor4, OUTPUT);

  //Setting Baud Rate for Serial Commmunication
  Serial.begin(9600);

  //Serial Message to show that Setup succesfully Finished
  Serial.println("Arduino Connected!!!");
}



void loop() {
  //Read HC-06 Serial
  if (Serial.available() > 0) {

    // If there is data in serial set command to that
    command = Serial.read();
    Serial.println(command);

    // Preform the function based on what the command was
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
      case 'A':
        breaks();
        break;
    }
  }
}


//Defining Function for Forward Motion
void forward() {
  digitalWrite(motor1, LOW);      
  digitalWrite(motor2, HIGH);
  digitalWrite(motor3 , LOW);
  digitalWrite(motor4 , HIGH);
  delay(1000);
  Serial.println("Forward Motion");
}

//Defining Function for Backwards Motion
void reverse() {
  digitalWrite(motor1, HIGH);    
  digitalWrite(motor2, LOW);
  digitalWrite(motor3, HIGH);
  digitalWrite(motor4, LOW);
  delay(1000);
  Serial.println("Backwards Motion");
}


//Defining Function for Left Motion
void left() {
  digitalWrite(motor1, HIGH);      
  digitalWrite(motor2, HIGH);
  digitalWrite(motor3, LOW);
  digitalWrite(motor4, HIGH);
  delay(1000);
  Serial.println("Left Motion");
}


//Defining Function for Right Motion
void right() {
  digitalWrite(motor1, LOW);      
  digitalWrite(motor2, HIGH);
  digitalWrite(motor3, HIGH);
  digitalWrite(motor4, HIGH);
  delay(1000);
  Serial.println("Right Motion");
}


//Defining Function for breaks
void breaks() {
  digitalWrite(motor1, HIGH);    
  digitalWrite(motor2, HIGH);
  digitalWrite(motor3, HIGH);
  digitalWrite(motor4, HIGH);
  delay(1000);
  Serial.println("Breaks");
}

