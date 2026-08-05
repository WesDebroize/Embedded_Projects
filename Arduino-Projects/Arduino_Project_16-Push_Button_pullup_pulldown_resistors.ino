//Arduino_Project_16-Push_Button_w/pullup+pulldown_resistors
/*
  Pull up resistor:
    Connect the resistor to the button via the input of the 
    button - pwr, resistor, input of button. 
    Then having the read pin connected between the resistor
    and the button
    When button is off = 1
    When button is on (pushed) = 0

  Pull down resistor:
    Connect the resistor to the output of the button then to 
    ground - output of button, resistor, ground.
    Then having the read pin connected between the button and
    the resistor
    When button is off = 0
    When button is on (pushed) = 1
*/

//Global Variables
int pinLED = 8;
int wait = 200;

//Pull-up resistor button
int pinPullDownButton = 2;
int pullDownButtonRead;
int pullDownPushed = 1;
int pullDownNotPushed = 0;

//Pull-down 
int pinPullUpButton = 12;
int pullUpButtonRead;
int pullUpPushed = 0;
int pullUpNotPushed = 1;

void setup() {
  pinMode(pinPullDownButton, INPUT);
  pinMode(pinPullUpButton, INPUT);
  pinMode(pinLED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  //Pull-down resistor button
  pullDownButtonRead = digitalRead(pinPullDownButton);
  Serial.print("Pull down resistor:");
  Serial.println(pullDownButtonRead);

  if(pullDownButtonRead == pullDownPushed || pullUpButtonRead == pullUpPushed){
    digitalWrite(pinLED, HIGH);
  }

  if(pullDownButtonRead == pullDownNotPushed && pullUpButtonRead == pullUpNotPushed){
    digitalWrite(pinLED, LOW);
  }
  //Pull-up resistor button
  pullUpButtonRead = digitalRead(pinPullUpButton);
  Serial.print("Pull-up resistor:");
  Serial.println(pullUpButtonRead);
  delay(wait);
}
/*
  I had seperate if statments for each button, but the LED would
  then go on and off as two if statments would be true. To
  fix this I conbined the if statment turning the LED on
  with the OR command and  the if statment turning the LED off with
  a the AND command. If I used OR for both i would have to press 
  both buttons at the same time for the LED to turn on (like an
  AND gate)
*/
