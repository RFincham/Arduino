// If ... Else

int x;

void setup()
{
  Serial.begin(9600);
  Serial.println("if ... Else statements");
  Serial.println();
}

void loop()
{
  x++;
  if(x>10)
  {
    Serial.print("The counter of variable x has a value of ");
    Serial.println(x);
    while(1);
  }
  else
  {
    Serial.print("X = ");
    Serial.print(x);
    Serial.println();
  }  
}

