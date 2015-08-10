//My Second Arduino Program

int ledPin = 13; //LED is connected to LED pin 13

void setup()
{
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  Serial.println("Our Second Arduino program");
  Serial.println();
}

void loop()
{
  Serial.print("5 + 188 yields ");
  Serial.print(5+188);
  while(true)
  {
    digitalWrite(ledPin, HIGH); //Turn on LED
    delay(1000);                //Wait for a second
    digitalWrite(ledPin, LOW);  //Turn off LED
    delay(1000);                //Wait for a second
    continue;
  }
}

