bool Estado_pulsador;
int presionado = 0;
int flag= 0;
void setup()
//RECORDAR QUE LA FUNCION SETUP EJECUTARA SUS INSTRUCCIONES SOLO UNA VEZ!
{                            //Inicializacion del hardware que vamos a usar
  pinMode(13, OUTPUT);       //Declaramos el pin 13 como salida
  pinMode(2, INPUT);         //Declaramos el pin 2 como enrtada
  Serial.begin(9600);
}



bool pulsador_x_flanco();
void loop()
{
 
  bool estado;

  estado = pulsador_x_flanco();

  Serial.print(estado);
}


bool pulsador_x_flanco()
{
  if(digitalRead(2) == LOW && flag == 0)
     flag = 1;

  if (digitalRead(2) == HIGH && flag == 1)
  {
      delay(200);
      flag = 0;
      //Serial.println("PULSE FLANCO ASCENDENTE");
      return HIGH;
  }
  return LOW;
  
  
}
/*
    ACTIVIDAD:         Modificar el algoritmo existente
                            o 
    crear uno nuevo para detectar un flanco descendente
*/
