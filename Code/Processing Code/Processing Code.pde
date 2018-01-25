//Imports libraries to make this task easier
import processing.serial.*;

//Sends Serial Output as the default location to read
Serial mySerial;

//Uses internal function for output
PrintWriter output;


void setup() {
   // Reads output from the Serial Port available
   // CHECK TO SEE IF BAUD RATE SAME AS THE BAUD RATE DEFINED IN MPU-6050 CODE
   mySerial = new Serial( this, Serial.list()[0], 115200 );
   
   //Creates New text file to save the output data.
   output = createWriter( "data.txt" );
}


void draw() {
    // If output in Serial sets the output to a variable named string
    if (mySerial.available() > 0 ) {
         String value = mySerial.readString();
         
         // As long as the value is not empty, adds data to the text file defined
         if ( value != null ) {
              output.println(value);
         }
    }
}


void keyPressed() {
    // Writes the remaining data to the file
    output.flush();  
    
    //Closes the textfile
    output.close();  
    exit();  
}