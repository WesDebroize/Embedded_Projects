//Arduino_Project_10-Implementing_If_Statments 
/*
  Using If statments to control when turning on other pins
*/
//Read Variables 
int pinRead = A1;
float realV;
float DigitalVoltage;
float VRef = 5.0;
float MaxDigitalVoltage =  1023.0;
int wait = 500;

//LED Variables
float WarnVoltage = 4.0;
int LEDPin = 9;


void setup() {
  pinMode(pinRead, INPUT);
  Serial.begin(9600);

  pinMode(LEDPin, OUTPUT);
}

void loop() {
  //Potentiometer output code
  DigitalVoltage = analogRead(A1);
  realV = (DigitalVoltage/MaxDigitalVoltage)*VRef;
  Serial.print("Potentiometer output = ");
  Serial.println(realV);

  //LED warning code
  if(realV >= WarnVoltage){
    digitalWrite(LEDPin, HIGH);
  }
  if(realV == VRef){
    Serial.println("Potentiometer at max voltage output.");
  }
  if(realV < WarnVoltage){
    digitalWrite(LEDPin, LOW);
  }
  delay(wait);



}
