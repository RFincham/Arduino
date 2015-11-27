//Serial.write function

byte val = 65;
char str[] = "Test";
byte buf[] = {'H','e','l','l','o'};
byte len = 5;

void setup() 
{
  Serial.begin(9600);
  Serial.println("Serial.write function");
  Serial.println();
}

void loop() 
{
  Serial.println("ASCII characters");
  Serial.write(val);
  Serial.println();

  Serial.println("String 1");
  Serial.write(str);
  Serial.println();

  Serial.println("String 2");
  Serial.write(buf, len);
  Serial.println();

  while(1);
}
