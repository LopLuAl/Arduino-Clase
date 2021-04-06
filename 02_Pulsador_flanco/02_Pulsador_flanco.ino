bool Estado_pulsador;
int presionado = 0;
int flag= 0;
void setup()
//RECORDAR QUE LA FUNCION SETUP EJECUTARA SUS INSTRUCCIONES SOLO UNA VEZ!
{                                     //Inicializacion del hardware que vamos a usar
  pinMode(LED_BUILTIN, OUTPUT);       //Declaramos el pin 13 como salida
  pinMode(2, INPUT);                  //Declaramos el pin 2 como enrtada
  Serial.begin(9600);
  Serial.println("Rutina SETUP");
}




void loop()
{
 
  if (digitalRead(2) == LOW)
  { 
    if (digitalRead(2) == HIGH)
    {
      delay(10);
      digitalWrite(LED_BUILTIN,HIGH);
      Serial.println("PULSE FLANCO ASCENDENTE");
    }
  }
}
