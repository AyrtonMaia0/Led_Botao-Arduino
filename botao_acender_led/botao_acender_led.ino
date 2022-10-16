// C++ code
// LED -> Pino 12
// Botao -> Pino 9 
void setup()
{
  pinMode(9, INPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  if(digitalRead(9) == HIGH){
  	digitalWrite(12, HIGH);
  }else{
  	digitalWrite(12, LOW);
  }
}