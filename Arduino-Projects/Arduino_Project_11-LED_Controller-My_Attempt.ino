//Arduino_Project_11-LED_Controller-My_Attempt
/*
  First I'm going to attempt this without the guide from Paul
  McWhort, heres what I think needs to be done inorder to get it
  working
  1.  Get the  digital voltage output from the potentiometer
  2.  Convert the digital voltage to the actual voltage 
      Maths:  (digitaloutput/1023.0)*5.0 = output voltage of 
              potentiometer
  3.  Make the actual potentiometer voltage equal to the wanted 
      voltage of the LED (comparing to the output of the pin)
  4.  Convert that real wanted voltaged of the LED to the digital
      value of the analogue output range
      Maths:  (outputvoltage of potentiomenter/5.0)*255.0 = 
              digital volage input of the LED pin output
  5.  Finally, set the analogue output of the LEDPin to the 
      converted analogue value.

*/
//Global Variables
float VRef = 5.0;
int wait = 50;

//Potentiometer Variables 
int pinRead = A1;
float RealPotentiometerVoltage;
float DigitalPotentiometerVoltage;
float MaxDigitalPotentiometerVoltage =  1023.0;

//LED Variables
int LEDPin = 9;
float RealLEDPinVoltage;
float DigitalLEDVoltage;
float MaxDigitalLEDVoltage = 255.0;

void setup() {
  pinMode(pinRead, INPUT);
  Serial.begin(9600);
  pinMode(LEDPin, OUTPUT);
}

void loop() {
  //Potentiometer output code
  //Real voltage of potentiometer output conversion
  DigitalPotentiometerVoltage = analogRead(A1);
  RealPotentiometerVoltage = (DigitalPotentiometerVoltage/MaxDigitalPotentiometerVoltage)*VRef;
  //Real voltage of potentiometer output printed
  Serial.print("Potentiometer output = ");
  Serial.println(RealPotentiometerVoltage);

  //LED code
  //Real voltage of the output LEDPin conversion
  RealLEDPinVoltage = RealPotentiometerVoltage;
  DigitalLEDVoltage = (RealLEDPinVoltage/VRef)*MaxDigitalLEDVoltage;
  analogWrite(LEDPin, DigitalLEDVoltage);
  delay(wait);
}

/*
  Feedback from actual video:
    I did more maths then was needed, but doing the maths like I 
    did helped me understand the conversion more. But simply the 
    maths could of been done in one equation without converting 
    to the real voltage at all. The simplier maths equation:
    DigitalLEDVotage = (MaxLEDDigitalVoltage/
                        MaxDigitalPotentiometerVoltage)
                        *DigitalPotentiometerVoltage
                        or
    Pin 9            = (255.0/1023.0)*A1
*/