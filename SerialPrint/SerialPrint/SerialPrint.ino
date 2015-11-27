//serial.print function

int cnt;

void setup() 
{
  Serial.begin(9600);
  Serial.println("ASCII table");
}

void loop() 
{
  Serial.write(cnt);
  Serial.print(", dec: ");
  Serial.print(cnt);
  Serial.print(", hex: ");
  Serial.print(cnt, HEX);
  Serial.print(", oct: ");
  Serial.print(cnt, OCT);
  Serial.print(", bin: ");
  Serial.println(cnt, BIN);
  if(cnt==126)while(1);
  cnt++;
}
