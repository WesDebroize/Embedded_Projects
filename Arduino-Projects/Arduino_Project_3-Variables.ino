//Arduino project 3 - adding varibales to the project 2 code
/*Task: 
    - Blink the red LED 5 times
    - Blink the green LED 10 times
    - Blink the blue LED 15 times
    - Doing it without using numbers within the actual code
*/
//Variables
int redLED = 13;
int greenLED = 8;
int blueLED = 7;
int tdelay = 1000;

void setup() {
  // put your setup code here, to run once:
  //For blue LED
  pinMode(blueLED, OUTPUT);
  //For green LED
  pinMode(greenLED, OUTPUT);
  //For red LED  
  pinMode(redLED, OUTPUT);
}

void loop() {
  //Blink 1
  digitalWrite(blueLED, HIGH);
  digitalWrite(greenLED, HIGH);
  digitalWrite(redLED, HIGH);

  delay(tdelay);

  digitalWrite(blueLED, LOW);
  digitalWrite(greenLED, LOW);
  digitalWrite(redLED, LOW);

  delay(tdelay);

  //Blink 2
  digitalWrite(blueLED, HIGH);
  digitalWrite(greenLED, HIGH);
  digitalWrite(redLED, HIGH);

  delay(tdelay);

  digitalWrite(blueLED, LOW);
  digitalWrite(greenLED, LOW);
  digitalWrite(redLED, LOW);

  delay(tdelay);

  //Blink 3
  digitalWrite(blueLED, HIGH);
  digitalWrite(greenLED, HIGH);
  digitalWrite(redLED, HIGH);

  delay(tdelay);

  digitalWrite(blueLED, LOW);
  digitalWrite(greenLED, LOW);
  digitalWrite(redLED, LOW);

  delay(tdelay);

  //Blink 4
  digitalWrite(blueLED, HIGH);
  digitalWrite(greenLED, HIGH);
  digitalWrite(redLED, HIGH);

  delay(tdelay);

  digitalWrite(blueLED, LOW);
  digitalWrite(greenLED, LOW);
  digitalWrite(redLED, LOW);

  delay(tdelay);

  //Blink 5
  digitalWrite(blueLED, HIGH);
  digitalWrite(greenLED, HIGH);
  digitalWrite(redLED, HIGH);

  delay(tdelay);

  digitalWrite(blueLED, LOW);
  digitalWrite(greenLED, LOW);
  digitalWrite(redLED, LOW);

  delay(tdelay);

  //Blink 6 - reds now completed 5 blinks
  digitalWrite(blueLED, HIGH);
  digitalWrite(greenLED, HIGH);

  delay(tdelay);

  digitalWrite(blueLED, LOW);
  digitalWrite(greenLED, LOW);

  delay(tdelay);

  //Blink 7
  digitalWrite(blueLED, HIGH);
  digitalWrite(greenLED, HIGH);

  delay(tdelay);

  digitalWrite(blueLED, LOW);
  digitalWrite(greenLED, LOW);

  delay(tdelay);

  //Blink 8
  digitalWrite(blueLED, HIGH);
  digitalWrite(greenLED, HIGH);

  delay(tdelay);

  digitalWrite(blueLED, LOW);
  digitalWrite(greenLED, LOW);

  delay(tdelay);

  //Blink 9
  digitalWrite(blueLED, HIGH);
  digitalWrite(greenLED, HIGH);

  delay(tdelay);

  digitalWrite(blueLED, LOW);
  digitalWrite(greenLED, LOW);

  delay(tdelay);

  //Blink 10
  digitalWrite(blueLED, HIGH);
  digitalWrite(greenLED, HIGH);

  delay(tdelay);

  digitalWrite(blueLED, LOW);
  digitalWrite(greenLED, LOW);

  delay(tdelay);

  //Blink 11 - Green has completed 10 blinks
  digitalWrite(blueLED, HIGH);

  delay(tdelay);

  digitalWrite(blueLED, LOW);

  delay(tdelay);

  //Blink 12
  digitalWrite(blueLED, HIGH);

  delay(tdelay);

  digitalWrite(blueLED, LOW);

  delay(tdelay);

  //Blink 13
  digitalWrite(blueLED, HIGH);

  delay(tdelay);

  digitalWrite(blueLED, LOW);

  delay(tdelay);

  //Blink 14
  digitalWrite(blueLED, HIGH);

  delay(tdelay);

  digitalWrite(blueLED, LOW);

  delay(tdelay);

  //Blink 15 
  digitalWrite(blueLED, HIGH);

  delay(tdelay);

  digitalWrite(blueLED, LOW);

  delay(tdelay);

  //Blue has completed blinking, back to start
}