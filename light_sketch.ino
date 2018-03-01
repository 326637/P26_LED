int potPin= A0;  //Declare potPin to be analog pin A0
int LEDPin= 9;  // Declare LEDPin to be arduino pin 9
int readValue;  // Use this variable to read Potentiometer
int BLED; // LED brightness
int TIME= 0; // time right now
 
void setup() {
  pinMode(potPin, INPUT);  //set potPin to be an input
  pinMode(LEDPin, OUTPUT); //set LEDPin to be an OUTPUT
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

