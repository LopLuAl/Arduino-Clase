
int estado = 0;

void setup()
//RECORDAR QUE LA FUNCION SETUP EJECUTARA SUS INSTRUCCIONES SOLO UNA VEZ!
{                            //Inicializacion del hardware que vamos a usar
  pinMode(13, OUTPUT);       //Declaramos el pin 13 como salida
  pinMode(2, INPUT);         //Declaramos el pin 2 como enrtada
}

void loop()
{                                        
  estado = digitalRead(2);  //  Leemos el estado del pulsador. estado tendra almacenado el estado logico de dicha entrada
//   |    CONDICION      |
  if (estado == HIGH     )      // Pregunto por el valor de estado
  {                             // Todo el codigo
    digitalWrite(13, HIGH);     // Encerrado entre llaves que este antes del "else"
    delay(50);
  }                             // Se ejecutara si la condicon es verdadera
  else
  {                             // Entre llaves despues del else
    digitalWrite(13, LOW);      // Se ejecuratán todas las sentencias
    delay(50);
                                // cuando la condicion no sea verdadera
  }
}
