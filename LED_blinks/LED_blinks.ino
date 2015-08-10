//Uses LED L on the Arduino Uno

int ledPin = 13; //LED is connected to LED pin 13

//The seup routine configures the digital port
//This routine is executed only once at program start!

void setup()
{
  // The pin is configured as output
  pinMode(ledPin, OUTPUT);
}

  // The main program is an infinite loop
void loop()
{
  digitalWrite(ledPin, HIGH); //Turn on LED
  delay(1000);                //Wait for a second
  digitalWrite(ledPin, LOW);  //Turn off LED
  delay(1000);                //Wait for a second
}
