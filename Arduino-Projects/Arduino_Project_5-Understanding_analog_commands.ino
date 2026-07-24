//Arduino_Project_5
/*
  Using an analog pin, you can adjust the amount of voltage outputting through 
  said pin using a range of numbers, you can show this happening by using an LED.
  I decided to try it using a for loop cycling from the smallest value to the biggest,
  so the LED should go from off, to getting brighter and brighter, than hitting max
  brightness (5V).
*/
/*
Important information:
  The ADC conversion for the arduino R3 has a range of 8-bits (0-255) for it's voltage of 0-5,
  so every step up value is equal to 5/255.
*/
int pin = 3;
int brightness;
int wait = 50;

void setup() {
  pinMode(pin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
    for (int i = 0; i < 255; i++){
      brightness = i;
      analogWrite(pin, brightness);
      delay(wait);
  }
}
