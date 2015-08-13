// if...

int x;

void setup() 
{
  Serial.begin(9600);
  Serial.println("if statements");
  Serial.println();
}

void loop()
{
  if(x!=10)
  {
    Serial.println("The counter of variable x now has a value of 10!");
    while(1);
  }
  x++;
}
