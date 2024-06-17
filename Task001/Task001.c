// C++ code
//
int LED_GREEN = 13;
int LED_YELLOW = 12;
int LED_RED = 11;
int BUTTOM = 2;
int count = 0;
void setup()
{
  pinMode(LED_GREEN, OUTPUT);
  pinMode(LED_YELLOW, OUTPUT);
  pinMode(LED_RED, OUTPUT);
  pinMode(BUTTOM, INPUT);
}

void loop()
{
  count = 0;
  digitalWrite(LED_GREEN,HIGH);
  if(digitalRead(BUTTOM)== HIGH)
  {
  while(count != 4)
  {
  digitalWrite(LED_GREEN, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LED_GREEN, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  count++;
  }
  digitalWrite(LED_YELLOW, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LED_YELLOW, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
  digitalWrite(LED_RED, HIGH);
  delay(3000); // Wait for 1000 millisecond(s)
  digitalWrite(LED_RED, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  }
}