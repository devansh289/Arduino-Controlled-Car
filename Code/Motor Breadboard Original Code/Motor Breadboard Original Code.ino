const int motor1pin = 10;
const int motor2pin = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode(motor1pin, OUTPUT);
  pinMode(motor2pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(motor1pin, LOW);//Motor 1 Forward
  digitalWrite(motor2pin, HIGH);//Motor 1 Forward
  delay(100);
  digitalWrite(motor1pin, LOW);//Motor 1 Forward
  digitalWrite(motor2pin, HIGH);//Motor 1 Forwards
}
