//My first Ardiuno Project - Blinking pin 13

void setup() {
  // put your setup code here, to run once:
  //Tell the Ardunio which pin will be in use
  pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //Turns pin 13 on (HIGH)
  digitalWrite(13,HIGH);

  //Adds time delay in ms (1000ms/1s)
  delay(1000);

  //Turns pin 13 off (LOW)
  digitalWrite(13,LOW);
  
  //Adds time delay in ms (1000ms/1s)
  delay(1000);

}
