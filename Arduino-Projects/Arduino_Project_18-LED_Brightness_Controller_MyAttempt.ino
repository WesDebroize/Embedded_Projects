//Arduino_Project_18-Push_button_LED_Brightness_Controller 
/*
  Mini project to get use to working with buttons:
    Create a circuit with two buttons; one which turns the LED
    on and each press increase the bightness; one which dims
    the LED and makes it dimmer.
*/
/*
  My inital idea is to implement counting for loops of
  increments of 5 for each setting, one for loop for each 
  button. This will involves the skills I learned form 
  projects 17, 5, 7
*/
//Variables
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
  pinMode(brightPin, INPUT);
  pinMode(dimmerPin, INPUT);
  pinMode(LEDPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  brightButtonNew = digitalRead(brightPin);
  dimmerButtonNew = digitalRead(dimmerPin);

  if (brightButtonOld == 1 && brightButtonNew == 0){
    if (LEDLevel >= 0 && LEDLevel < LEDLevelMax){
        LEDLevel++;
    }
    LEDDigitalLevel = (LEDLevel/LEDLevelMax)*digitalVoltage;
    analogWrite(LEDPin, LEDDigitalLevel);
    Serial.println(LEDLevel);
  }

  if (dimmerButtonOld == 1 && dimmerButtonNew == 0){
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

/*
Took me way too long to work this out. The `for` loops, 
which I thought I needed, were not necessary, as they would 
just take the LED straight to full brightness and full dimmness.

Today, I learnt more about when a `for` loop is necessary 
than anything else, but it’s cool that I’ve made my first fully 
controllable project.
*/