const int motor1 = 5;         //motor1 and motor2 --> First motor
const int motor2 = 6;
const int motor3 = 8;        //motor3 and motor4 --> Second motor
const int motor4 = 9;
 
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
    digitalWrite(motor3 , LOW);
    digitalWrite(motor4 , HIGH);
    delay(1000);
   
    digitalWrite(motor1, HIGH);      //Pause
    digitalWrite(motor2, HIGH);
    digitalWrite(motor3, HIGH);
    digitalWrite(motor4, HIGH);
    delay(1000);
    
    
    digitalWrite(motor1, HIGH);     //Backwards
    digitalWrite(motor2, LOW);
    digitalWrite(motor3, HIGH);
    digitalWrite(motor4, LOW);
    delay(1000);
   
    digitalWrite(motor1, HIGH);      //Pause
    digitalWrite(motor2, HIGH);
    digitalWrite(motor3, HIGH);
    digitalWrite(motor4, HIGH);
    delay(1000);
   
    digitalWrite(motor1, HIGH);      //Left
    digitalWrite(motor2, HIGH);
    digitalWrite(motor3, LOW);
    digitalWrite(motor4, HIGH);
    delay(1000);
   
    digitalWrite(motor1, HIGH);      //Pause
    digitalWrite(motor2, HIGH);
    digitalWrite(motor3, HIGH);
    digitalWrite(motor4, HIGH);
    delay(1000);
   
    digitalWrite(motor1, LOW);      //Right
    digitalWrite(motor2, HIGH);
    digitalWrite(motor3, HIGH);
    digitalWrite(motor4, HIGH);
    delay(1000);
    
    digitalWrite(motor1, HIGH);      //Pause
    digitalWrite(motor2, HIGH);
    digitalWrite(motor3, HIGH);
    digitalWrite(motor4, HIGH);
    delay(1000);
    
}