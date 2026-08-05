//Arduino_Project_17-Push_button_as_toggle_switch
/*
  A very useful lesson/code
  Using a pull-down resistor type press button this is a
  program for a toggle button.
  For a toggle button to work you need a variable to 
  remember the state the LED is in
*/
//Variables
int buttonOutputPin = 2;
int outputPin = 8;
int pinState = 0;
int buttonOld = 0;
int buttonNew;
int wait = 1000;

void setup() {
  pinMode(outputPin, OUTPUT);
  pinMode(buttonOutputPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  buttonNew = digitalRead(buttonOutputPin);
  Serial.println(buttonNew);

  if(buttonOld == 1 && buttonNew == 0) {
    if (pinState == 0){
      digitalWrite(outputPin, HIGH);
      pinState = 1;
    }
    else{
      digitalWrite(outputPin, LOW);
      pinState = 0;
    }
  } 
  buttonOld = buttonNew;
}
