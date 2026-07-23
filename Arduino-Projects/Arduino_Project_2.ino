//Arduino project 2 - multi LED flashing circuit
/*Task: 
    - Blink the red LED 5 times
    - Blink the green LED 10 times
    - Blink the blue LED 15 times
*/
void setup() {
  // put your setup code here, to run once:
  //For blue LED
  pinMode(7, OUTPUT);
  //For green LED
  pinMode(8, OUTPUT);
  //For red LED  
  pinMode(13, OUTPUT);
}

void loop() {
  //Blink 1
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(13, HIGH);

  delay(100);

  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(13, LOW);

  delay(100);

  //Blink 2
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(13, HIGH);

  delay(100);

  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(13, LOW);

  delay(100);

  //Blink 3
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(13, HIGH);

  delay(100);

  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(13, LOW);

  delay(100);

  //Blink 4
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(13, HIGH);

  delay(100);

  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(13, LOW);

  delay(100);

  //Blink 5
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(13, HIGH);

  delay(100);

  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(13, LOW);

  delay(100);

  //Blink 6 - reds now completed 5 blinks
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);

  delay(100);

  digitalWrite(7, LOW);
  digitalWrite(8, LOW);

  delay(100);

  //Blink 7
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);

  delay(100);

  digitalWrite(7, LOW);
  digitalWrite(8, LOW);

  delay(100);

  //Blink 8
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);

  delay(100);

  digitalWrite(7, LOW);
  digitalWrite(8, LOW);

  delay(100);

  //Blink 9
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);

  delay(100);

  digitalWrite(7, LOW);
  digitalWrite(8, LOW);

  delay(100);

  //Blink 10
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);

  delay(100);

  digitalWrite(7, LOW);
  digitalWrite(8, LOW);

  delay(100);

  //Blink 11 - Green has completed 10 blinks
  digitalWrite(7, HIGH);

  delay(100);

  digitalWrite(7, LOW);

  delay(100);

  //Blink 12
  digitalWrite(7, HIGH);

  delay(100);

  digitalWrite(7, LOW);

  delay(100);

  //Blink 13
  digitalWrite(7, HIGH);

  delay(100);

  digitalWrite(7, LOW);

  delay(100);

  //Blink 14
  digitalWrite(7, HIGH);

  delay(100);

  digitalWrite(7, LOW);

  delay(100);

  //Blink 15 
  digitalWrite(7, HIGH);

  delay(100);

  digitalWrite(7, LOW);

  delay(100);

  //Blue has completed blinking, back to start
}
