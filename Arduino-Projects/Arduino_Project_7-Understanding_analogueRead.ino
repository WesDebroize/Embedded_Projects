//Arduino_Project_7-Understanding_analogueRead
/*
  This project involves using the analogue input pins on the arduino
  to measure and output a voltage from the circuit, using the serial 
  monitor.

  Using a simple circuit of two risisters, first being 330 ohms and 
  the next being 100 ohms. Measuring the voltage between both of the
  resisters then printing out the value to the serial monitor.

  This said value (V2) displays an output of 237 on the serial 
  monitor. Now kind of like the 8-bit input value of the voltage with
  input digital PMW pins, it doesnt display an exact value, but 
  instead an ADC 10-bit value (0-1023). So by converting the value by
  doing (readVoltage/TotalDigitalVoltage)*MaxVoltage we get the real
  voltage value.

  Real voltage value = (237/1023)*5 = 1.158V 
  In the code however all value have to be to be a floating point 
  value, all numbers involved need to be to a deceimal place.5
 
*/
int readPin = A3;
float refVoltage = 5.0;
float readVal = 0.0;
float totalDigitalVoltage = 1023;
float V2 = 0.0;
int wait = 500;

void setup() {
  pinMode(readPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  readVal = analogRead(readPin);
  V2 = (readVal/totalDigitalVoltage)*refVoltage;
  Serial.println(V2);
  delay(wait);
}
