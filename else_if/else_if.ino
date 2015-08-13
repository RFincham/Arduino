// Else ... If

int x;

void setup()
{
  Serial.begin(9600);
  Serial.println("Else ... If statements");
  Serial.println();
}

void loop()
{

  if(x==1)
  {
    Serial.println("Text 1");
  }
  else if (x==10)
  {
    Serial.println("Text 10");
    while(1);
  }
  else
  {
    Serial.print("X = ");
    Serial.print(x);
    Serial.println();
  }
  x++;
}

