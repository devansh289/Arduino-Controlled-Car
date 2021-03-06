#include <Wire.h>
#include <MPU6050.h>
MPU6050 mpu;

void setup() {
  
  Serial.begin(115200);
  
  while (!mpu.begin(MPU6050_SCALE_2000DPS, MPU6050_RANGE_2G))
  {
    Serial.println("Could not find a valid MPU6050 sensor, check wiring!");
    delay(115200);
  }
  
  Serial.println("Initialize MPU6050");
}



void loop() {
  
  char command;
  Vector normAccel = mpu.readNormalizeAccel();

  int pitch = -(atan2(normAccel.XAxis, sqrt(normAccel.YAxis * normAccel.YAxis + normAccel.ZAxis * normAccel.ZAxis)) * 180.0) / M_PI;
  int roll = (atan2(normAccel.YAxis, normAccel.ZAxis) * 180.0) / M_PI;

  Serial.print(" Pitch = ");
  Serial.print(pitch);
  Serial.print(" Roll = ");
  Serial.print(roll);
  Serial.println();
    
  delay(100);


}


