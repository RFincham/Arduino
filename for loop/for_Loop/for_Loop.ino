// for

int x;

void setup()
{
  Serial.begin(9600);
  Serial.println("for statements");
  Serial.println();
}

void loop()
{
  Serial.println("Increment 1");
  for(x=0;x<10;x++)
  {
    Serial.print("X = ");
    Serial.print(x);
    Serial.println();
  }
  
  Serial.println("Increment 2");
  for(x=0;x<10;x=x+2)
  {
    Serial.print("X = ");
    Serial.print(x);
    Serial.println(); 
  }

  Serial.println("Now we count down from 10 to 1 with a decrement of 1");
  for(x=10;x>0;x--)
  {
    Serial.print("X = ");
    Serial.print(x);
    Serial.println(); 
  }

  //End of program!
  while(1);
}

