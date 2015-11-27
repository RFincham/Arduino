//constrain(x, a, b) function

int x,Res;

void setup() 
{
  Serial.begin(9600);
  Serial.println("constrain(x, a, b) function");
  Serial.println();
}

void loop() 
{
  for(x=0;x<60;x++)
  {
    Res=constrain(x,10,50);
    Serial.print(Res);
    Serial.println();
  }
  while(1);
}
