//Arduino_Project_18-LED_Brightness_Controller_Improved
/*
  This one is just like my attempt but this time the circuit
  has no pull-down resisters and instead using the internally built
  in pull-up resisters from the arduino. 
*/
int wait = 100;
float LEDLevelMax = 10.0;

//Brighter button
int brightPin = 2;
int brightButtonOld;
int brightButtonNew;

//Dimmer button
int dimmerPin = 4;
int dimmerButtonOld;
int dimmerButtonNew;

//LED
int LEDPin = 10;
float LEDDigitalLevel;
int LEDLevel = 0;
float digitalVoltage = 255;

void setup() {
  //New command enables the pull-up resistor to be used from the pin
  pinMode(brightPin, INPUT_PULLUP); 
  pinMode(dimmerPin, INPUT_PULLUP); 
  pinMode(LEDPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  brightButtonNew = digitalRead(brightPin);
  dimmerButtonNew = digitalRead(dimmerPin);

  if (brightButtonOld == 0 && brightButtonNew == 1){
    if (LEDLevel >= 0 && LEDLevel < LEDLevelMax){
        LEDLevel++;
    }
    LEDDigitalLevel = (LEDLevel/LEDLevelMax)*digitalVoltage;
    analogWrite(LEDPin, LEDDigitalLevel);
    Serial.println(LEDLevel);
  }

  if (dimmerButtonOld == 0 && dimmerButtonNew == 1){
    if (LEDLevel > 0 && LEDLevel <= LEDLevelMax){
        LEDLevel--;
    }
    LEDDigitalLevel = (LEDLevel/LEDLevelMax)*digitalVoltage;
    analogWrite(LEDPin, LEDDigitalLevel);
    Serial.println(LEDLevel);
   }
   brightButtonOld = brightButtonNew;
   dimmerButtonOld = dimmerButtonNew;
  }
