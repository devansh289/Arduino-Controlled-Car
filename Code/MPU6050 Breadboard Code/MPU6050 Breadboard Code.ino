//Add libraries for making tasks easier.
#include <Wire.h>
#include <MPU6050.h>

// Call the device in the MPU6050.h Library
MPU6050 mpu;



void setup() {
  //Set baud rate for communication.
  Serial.begin(115200);

  //Display Serial Message while the MPU6050 is not connected
  while (!mpu.begin(MPU6050_SCALE_2000DPS, MPU6050_RANGE_2G))
  {
    Serial.println("Could not find a valid MPU6050 sensor, check wiring!");
    delay(115200);
  }

  //Print to Serial when Setup is complete
  Serial.println("Initialize MPU6050");

}



void loop() {
  //Initalize empty variable for output
  char command;

  // Read normalized values from accelerometer
  Vector normAccel = mpu.readNormalizeAccel();

  // Calculate Pitch & Roll using trignometry functions
  int pitch = -(atan2(normAccel.XAxis, sqrt(normAccel.YAxis * normAccel.YAxis + normAccel.ZAxis * normAccel.ZAxis)) * 180.0) / M_PI;
  int roll = (atan2(normAccel.YAxis, normAccel.ZAxis) * 180.0) / M_PI;


  // Output the values when needed for debugging
  /*
    Serial.print(" Pitch = ");
    Serial.print(pitch);
    Serial.print(" Roll = ");
    Serial.print(roll);
    Serial.println();
  */


  // Convert the Pitch & Roll to a directional output
  // A = Stop
  // F = Forward
  // B = Backwards
  // R = Right
  // L = Left

  if (pitch < -30 && pitch > -70) {
    command = 'F';
  }
  else if (pitch > 20 && pitch < 50) {
    command = 'A';
  }
  else if (pitch > 60 && pitch < 80) {
    command = 'B';
  }
  else if (roll > 40 && roll < 70) {
    command = 'R';
  }
  else if (roll < -40 && roll > -70) {
    command = 'L';
  }
  else {
  }

  //Print the Directional output on th Serial for the Proccessing IDE to catch
  Serial.println(command);

  // Delay the accelrometer readings to 500ms
  delay(500);


}

