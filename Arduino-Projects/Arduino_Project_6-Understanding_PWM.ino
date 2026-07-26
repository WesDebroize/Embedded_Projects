//Arduino_Project_6-Understanding_PWM
/*
  PWM - Pulse width modulation

  Using an oscilloscope, when setting the voltage to 2.5, half of
  the max voltage output of the arduino, the oscilloscope displays
  a semetric square wave of both values 0 and 5V. So it's averageing
  2.5V.
  The arduino uses a 4ms period and works out how much of that period
  should be 5V or 0V. For 2.5 it would be on for 2ms, off for 2ms.
*/
int redPin = 9;
float wantedVoltage = 2.5;
//Maths used: (Wanted Voltage/Total voltage)*Analogue (ADC) no.
int bright = (wantedVoltage/5)*255;

void setup() {
  pinMode(redPin, OUTPUT);
}

void loop() {
  analogWrite(redPin, bright);
}
