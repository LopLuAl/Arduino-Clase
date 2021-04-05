#include <Servo.h>

Servo myservo;  

int potpin = 0;  
int val;   

void setup() 
{
  myservo.attach(9);  
}

void loop() 
{
  
// Lectura del modulo conversor AD

  val = analogRead(potpin);        


//  Variable donde se va a guardar el valor convertido
//    |      Variable de entrada a convertir
//    |        | Valor de entrada inferior
//    |        |   |  Valor de entrada superior
//    |        |   |   |  Valor de salida inferior
//    |        |   |   |    |  Valor de salida superior
//    |        |   |   |    |   |
    val = map(val, 0, 1023, 0, 180);     
//Escritura de la cantidad de grados que quiero mover mi servo
  myservo.write(val);                  
  delay(15);                           
}
