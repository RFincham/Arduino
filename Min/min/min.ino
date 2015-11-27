//min(x,y) function

int x,y,Res=0;

void setup() 
{
  Serial.begin(9600);
  Serial.println("min(x,y) function");
  Serial.println();
}

void loop() 
{
  Res=min(10,55);
  Serial.print(Res);
  Serial.println();

  while(1);
}
