//do while

int i=0;

void setup()
{
  Serial.begin(9600);
  Serial.println("while and do while program");
  Serial.println();
}

void loop()
{
  while(1)
  {
      i++;
      Serial.print(i);
      Serial.println();
      if(i>9) break;
  }

  i=0;
  Serial.println();

  while(i<10)
  {
      i++;
      Serial.print(i);
      Serial.println();
  }

  i=0;
  Serial.println();

  //do while
  do
  {
     i++;
     Serial.print(i);
     Serial.println();
  }while(i < 10);

  while(1);
  }

