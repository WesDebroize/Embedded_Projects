//Arduino_Project_9-Understanding_Potentiometers
/*
  In this project I developed my understanding of a potentiometer,
  learning that inside a potentiometer are two resistors with an
  output between the two. Twisting a dial to control how much 
  resistance there is within both the resisters.

  I used a 10k potentiometer in my circuit, connected to the 
  output of the potentiometer I have a 330 ohm resistor and
  an LED so I can visually see what happens when I turn the dial.
  
  For reference, lets say R1 is the left resistor (the side connected 
  to the power suuply) before the output and R2 is the right resistor 
  (the side connected to ground) after the output.
  When the dial is fully turned to the right:
  R1 = 10k ohms 
  R2 = 0 ohms
  Therefore the output voltage is 0V and LED is off.
  When the dial is fully turned to the left:
  R1 = 0 ohms
  R2 = 10k ohms
  Therefore the output voltage is 5V and LED is fully on.
  As you turn the dial from right to left, the brightness of the LED
  increases gradually. Well, due to the 330 ohm resistor, the LED
  doesn't turn on untill the output voltage = 2.7V.
*/

//Global variables
float DigitalVoltageTotal = 1023.0;
float Vref = 5.0;
int wait = 2000;

//Variables for the output of the potentiometer (PM)
int PM_pinRead = A1;
int PM_DigitalVoltage;
float PM_Vout;
String PM = "Potentiometer output voltage = ";

//Variables for the output of the LED
int LED_pinRead = A2;
int LED_DigitalVoltage;
float LED_V;
String LED = "LED Voltage = ";

void setup() {
  Serial.begin(9600);
}

void loop() {
  //Output of potentiometer
  PM_DigitalVoltage = analogRead(PM_pinRead);
  PM_Vout = (PM_DigitalVoltage/DigitalVoltageTotal)*Vref;
  Serial.print(PM);
  Serial.println(PM_Vout);

  //Output of LED
  LED_DigitalVoltage = analogRead(LED_pinRead);
  LED_V = (LED_DigitalVoltage/DigitalVoltageTotal)*Vref;
  Serial.print(LED);
  Serial.println(LED_V);
  delay(wait);
}
