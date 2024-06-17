// C++ code
//
int LED_GREEN = 13;
int LED_YELLOW = 12;
int LED_RED = 11;
int LED_GREEN2 = 10;
int LED_YELLOW2 = 9;
int LED_RED2 = 8;
int BUTTOM = 2;
//int count = 0;
void setup()
{
  pinMode(LED_GREEN, OUTPUT);
  pinMode(LED_YELLOW, OUTPUT);
  pinMode(LED_RED, OUTPUT);
  pinMode(LED_GREEN2, OUTPUT);
  pinMode(LED_YELLOW2, OUTPUT);
  pinMode(LED_RED2, OUTPUT);
  pinMode(BUTTOM,INPUT);
}

void loop()
{
  digitalWrite(LED_RED, LOW);
  digitalWrite(LED_YELLOW, LOW);
  digitalWrite(LED_GREEN, HIGH);
  
  digitalWrite(LED_RED2, HIGH);
  digitalWrite(LED_YELLOW2, LOW);
  digitalWrite(LED_GREEN2, LOW);
  
  if (digitalRead(BUTTOM) == HIGH)
  {
 	digitalWrite(LED_RED, LOW);
 	digitalWrite(LED_YELLOW, HIGH);
  	digitalWrite(LED_GREEN, LOW);
  
  	digitalWrite(LED_RED2, LOW);
  	digitalWrite(LED_YELLOW2, HIGH);
  	digitalWrite(LED_GREEN2, LOW);
    delay(3000);
    
    digitalWrite(LED_RED, HIGH);
 	digitalWrite(LED_YELLOW, LOW);
  	digitalWrite(LED_GREEN, LOW);
  
  	digitalWrite(LED_RED2, LOW);
  	digitalWrite(LED_YELLOW2, LOW);
  	digitalWrite(LED_GREEN2, HIGH);
    delay(3000);
    
    digitalWrite(LED_RED, LOW);
 	digitalWrite(LED_YELLOW, HIGH);
  	digitalWrite(LED_GREEN, LOW);
  
  	digitalWrite(LED_RED2, LOW);
  	digitalWrite(LED_YELLOW2, HIGH);
  	digitalWrite(LED_GREEN2, LOW);
    delay(3000);
  }
  
}