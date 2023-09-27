const int IN1 = 9;
const int IN2 = 11;
const int ENA = 6;
const int sensor = 2;
const int on = HIGH;
const int off = LOW;
int read;

void setup()
{
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(ENA, OUTPUT);
  pinMode(sensor, INPUT);
  Serial.begin(9600);
}

void loop()
{
  read = digitalRead(sensor);
  Serial.println(read);
  if (read == 1)
  {
    digitalWrite(IN1, on);
    digitalWrite(IN2, off);
    digitalWrite(ENA, on);
    
  }
  else
  {
    digitalWrite(IN1, off);
    digitalWrite(IN2, off);
    digitalWrite(ENA, off);
  }
}