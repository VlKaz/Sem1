// C++ code
//
int LED_GREEN = 13;
int command;
void setup()
{
  Serial.begin(9600);
  pinMode(LED_GREEN, OUTPUT);
}

void loop()
{
  if(Serial.available() > 0)
  {
    command = Serial.read();
    Serial.write(command);
    
    if (command == '1')
  		digitalWrite(LED_GREEN, HIGH);
 
    if (command == '0')
  		digitalWrite(LED_GREEN, LOW);
  }
}