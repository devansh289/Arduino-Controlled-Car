int motor1 = 9;         //motor1 and motor2 --> First motor
int motor2 = 13;
int motor3 = 12;        //motor3 and motor4 --> Second motor
int motor4 = 11;
 
void setup()
{
    pinMode(motor1, OUTPUT);
    pinMode(motor2, OUTPUT);
    pinMode(motor3, OUTPUT);
    pinMode(motor4, OUTPUT);
}
 
 
void loop()
{
    digitalWrite(motor1, LOW);      //Forward
    digitalWrite(motor2, HIGH);
    digitalWrite(motor3 ,LOW);
    digitalWrite(motor4 ,HIGH);
    delay(5000);
   
    digitalWrite(motor1, LOW);      //Pause
    digitalWrite(motor2, LOW);
    digitalWrite(motor3, LOW);
    digitalWrite(motor4, LOW);
    delay(5000);
   
    digitalWrite(motor1, HIGH);     //Backwards
    digitalWrite(motor2, LOW);
    digitalWrite(motor3, HIGH);
    digitalWrite(motor4, LOW);
    delay(5000);
   
    digitalWrite(motor1, LOW);      //Pause
    digitalWrite(motor2, LOW);
    digitalWrite(motor3, LOW);
    digitalWrite(motor4, LOW);
    delay(5000);
   
    digitalWrite(motor1, LOW);      //Left
    digitalWrite(motor2, HIGH);
    digitalWrite(motor3, LOW);
    digitalWrite(motor4, LOW);
    delay(5000);
   
    digitalWrite(motor1, LOW);      //Pause
    digitalWrite(motor2, LOW);
    digitalWrite(motor3, LOW);
    digitalWrite(motor4, LOW);
    delay(5000);
   
    digitalWrite(motor1, LOW);      //Right
    digitalWrite(motor2, LOW);
    digitalWrite(motor3, HIGH);
    digitalWrite(motor4, LOW);
    delay(5000);
   
}
