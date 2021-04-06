
int buttonPin = 2;    // Declaracion de variable, el compilador reemplazara buttonPin por 2
int ledPin =  13;     // Declaracion de variable, el compilador reemplazara ledPin por 13

int buttonState = 0;

void setup()
{                            //Inicializacion del hardware que vamos a usar
  pinMode(ledPin, OUTPUT);   //Declaramos el pin 13 como salida
  pinMode(buttonPin, INPUT); //Declaramos el pin 2 como enrtada
}

void loop()
{                                         // La funcion loop ejecutara secuencialmente las sentencias infinitamente
  buttonState = digitalRead(buttonPin);  //  Leemos el estado del pulsador. buttonState tendra almacenado el estado logico de dicha entrada
  
//   |    CONDICION      |
  if (buttonState == HIGH) // Pregunto por el valor de buttonState
  {                               //                   Todo el codigo
    digitalWrite(ledPin, HIGH);   //   Encerrado entre llaves que este antes del "else"
  }                               //       Se ejecutara si la condicon es verdadera
  else
  {                              // Entre llaves despues del else
    digitalWrite(ledPin, LOW);   // Se ejecuratán todas las sentencias
                                 // cuando la condicion no sea verdadera
  }
}
