// Switch Case

int x;

void setup()
{
  Serial.begin(9600);
  Serial.println("switch case statements");
  Serial.println();
}

void loop()
{
  switch(x)
  {
  case 10:
  Serial.println("We have reached 10");
  break;

  case 20:
  Serial.println("We have reached 20");
  break;

  case 30:
  Serial.println("We have reached 30");
  while(1);
  break;
  
  default:
  Serial.print("X = ");
  Serial.print(x);
  Serial.println();
  }

  x++;
}

