//Arduino_Project_12-Reading_Numbers_From_Serial_Monitor
/*
  Commands learnt from Pauls' Arudino tutorial 18:
    - To add a delay so user has time to answer within the Serial 
      Moniter, use:
        while(Serial.available() == 0) {

        }
    - To collect an integer from the user input use:
        = Serial.parseInt();

    - To collect a float or any other data type, just put the 
      data type required where the Int is located, example:
        = Serial.parseFloat();
        
    - To collect a String you use:
      = Serial.readString();
*/
/* 
  From what i've learnt from the video, I'm going make a program 
  that lets a user pick whether they want to use a Red, Green or
  Blue LED.
*/
//Global Variables
int wait = 0;
String onoff = "Type 1 for yes, 0 for no";

//Red LED Variables
String useLEDR = "Do you want to use the Red LED?";
int LEDR;
int LEDRPin = 2;

//Green LED Variables
String useLEDG = "Do you want to use the Green LED?";
int LEDG;
int LEDGPin = 4;

//Blue LED Variables
String useLEDB = "Do you want to use the Blue LED?";
int LEDB;
int LEDBPin = 6;


void setup() {
  pinMode(LEDRPin, OUTPUT);
  pinMode(LEDGPin, OUTPUT);
  pinMode(LEDBPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println(onoff);

  //Red LED
  Serial.println(useLEDR);
  while(Serial.available() == 0){
  }

  LEDR = Serial.parseInt();
  Serial.read();
  delay(wait);

  if(LEDR == 1) digitalWrite(LEDRPin, HIGH);
  if(LEDR == 0) digitalWrite(LEDRPin, LOW);


  //Green LED
  Serial.println(useLEDG);
  while(Serial.available() == 0){
  }

  LEDG = Serial.parseInt();
  Serial.read();
  delay(wait);

  if(LEDG == 1) digitalWrite(LEDGPin, HIGH);
  if(LEDG == 0) digitalWrite(LEDGPin, LOW);


  //Blue LED
  Serial.println(useLEDB);
  while(Serial.available() == 0){
  }

  LEDB = Serial.parseInt();
  Serial.read();
  delay(wait);

  if(LEDB == 1) digitalWrite(LEDBPin, HIGH);
  if(LEDB == 0) digitalWrite(LEDBPin, LOW);

}
/*
  While writing the program I ran into an error where I would only
  let you answer the first one as after that, Serial.available
  always equaled a number that wasnt zero. To resolve, I used the 
  added the command "Serial.read()" which clears the characters 
  after each time "parseInt" is called.
*/