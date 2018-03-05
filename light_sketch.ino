int potPin= A0;  //Declare potPin to be analog pin A0
int menuswPin= 6; //switch to turn on menu edit mode pin 6
int LEDPin= 9;  // Declare LEDPin to be arduino pin 9
int readValue;  // Use this variable to read Potentiometer
int LEDBright; // LED brightness
int LEDGoal; //Goal LED setting
int LEDMax; //MAX LED setting
int TIME= 0; // time right now

void setup() {
  pinMode(potPin, INPUT);  //set potPin to be an input
  pinMode(LEDPin, OUTPUT); //set LEDPin to be an OUTPUT
  pinMode(menuswPin, INPUT); //set menuswitch on pin to input
  Serial.begin(9600);      // turn on Serial Port
}
 
void loop() { 
 readValue = analogRead(potPin);  //Read the voltage on the Potentiometer
 LEDBright = (255./1023.) * readValue; //Calculate Write Value for LED
 analogWrite(LEDPin, LEDBright);      //Write to the LED
 Serial.print("You are writing a value of ");
 Serial.println(LEDBright);
 TIME++;
 Serial.print(TIME);
}


