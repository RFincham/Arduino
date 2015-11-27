//Arduino Functions 2

void setup()
{
  Serial.begin(9600);
  Serial.println("Arduino Functions");
  Serial.println();
}

void loop()
{
  int val;
  int x = 12;
  int y = 55;

  val=Add(x,y);
  Serial.print("The sum of ");
  Serial.print(x);
  Serial.print(" + ");
  Serial.print(y);
  Serial.print(" = ");
  Serial.print(val);

  while(1);
}

int Add(int val_1, int val_2)
{
    return val_1 + val_2;
}

