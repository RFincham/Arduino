//Serial.available function

byte input;
byte output;

void setup()
{
  Serial.begin(9600);
  Serial.println("Serial.available function");
  Serial.println();
}

void loop()
{
  if (Serial.available() > 0)
  {
    input=Serial.read();
    Serial.print("I received the following character: ");
    output=char(output);
    Serial.println(input);
  }
}
