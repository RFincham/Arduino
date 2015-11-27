//max(x,y) function

int x,y,Res=0;

void setup() 
{
  Serial.begin(9600);
  Serial.println("max(x,y) function");
  Serial.println();
}

void loop() 
{
  Res=max(10,55);
  Serial.print(Res);
  Serial.println();

  while(1);
}
