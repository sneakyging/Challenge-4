int button_pin = 2;
int button_state = 0; 

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(button_pin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (button_state == HIGH)       
  {
    digitalWrite(LED_BUILTIN, HIGH);  
    delay(1000);                       
    digitalWrite(LED_BUILTIN, LOW);    
    delay(1000);                       
  }
  else                         
  {
    digitalWrite(LED_BUILTIN, LOW);  
  }
}
