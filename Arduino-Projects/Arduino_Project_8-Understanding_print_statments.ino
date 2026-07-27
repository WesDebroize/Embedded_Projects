//Arduino_Project_8-Understanding_print_statments
int j = 1;
int z;
int wait = 750;
String myString = "j = ";
void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print(myString);
  Serial.println(j);
  j += 1;
  delay(wait);
}
