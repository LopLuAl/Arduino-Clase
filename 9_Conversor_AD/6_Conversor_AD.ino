int pote = A0;     
int Valor_digital = 0;  

void setup() 
{
   Serial.begin(9600); // Inicializo la UART con una velocidad de 9600 baudios
}

void loop() 
{
  Valor_digital = analogRead(pote); // Leo el valor analogico del pote
  delay(100);
  Serial.println(Valor_digital);
}
