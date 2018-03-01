int potPin= A0;  //Declare potPin to be analog pin A0
int menuswPin= 6; //switch to turn on menu edit mode pin 6
int LEDPin= 9;  // Declare LEDPin to be arduino pin 9
int readValue;  // Use this variable to read Potentiometer
int BLED; // LED brightness
int GLED; //Goal LED setting
int MLED; //MAX LED setting
int TIME= 0; // time right now

void setup() {
  pinMode(potPin, INPUT);  //set potPin to be an input
  pinMode(LEDPin, OUTPUT); //set LEDPin to be an OUTPUT
  pinMode(menuswPin, INPUT); //set menuswitch on pin to input
  Serial.begin(9600);      // turn on Serial Port
}
 
void loop() { 
 readValue = analogRead(potPin);  //Read the voltage on the Potentiometer
 BLED = (255./1023.) * readValue; //Calculate Write Value for LED
 analogWrite(LEDPin, BLED);      //Write to the LED
 Serial.print("You are writing a value of ");
 Serial.println(BLED);
 TIME++;
 Serial.print(TIME);
}


