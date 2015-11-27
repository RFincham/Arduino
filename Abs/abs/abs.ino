//abs(x) function

int Res;

void setup() 
{
  Serial.begin(9600);
  Serial.println("abs(x) function");
  Serial.println();
}

void loop() 
{
  Res=abs(3.1415);
  Serial.print(Res);
  Serial.println();

  while(1);
}
