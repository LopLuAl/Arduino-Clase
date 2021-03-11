void setup() 
{
  // put your setup code here, to run once:
 Serial.begin(9600);
}

void loop() {
  int a = 2;
  int b = 3;
  
 
  
  Serial.println("¿Es mayor que b?  ");
  if(a > b)
    Serial.print("-> a es mayor que b!");
  else
    Serial.print("-> a NO es mayor que b!"); // OJO!! QUE a NO SEA MAYOR QUE b el microcontrolador no sabe si a es menor, distinto o igual que b. Esto es facil para nosotros como humanos determinarlo pero al micro hay que explicarle TODO!

  Serial.println("");
  Serial.println("¿Es menor que b?  ");
  if (a < 25)
  {
     Serial.print("-> a es menor que 25");
  }
  else
  {
     Serial.print("-> a NO es menor que 25");
  }
 
  Serial.println("");
  Serial.println("¿Es mayor o igual que b?  ");
  if (a >= b)
  {
     Serial.print("-> a es mayor o igual que b");
  }
  else
  {
     Serial.print("-> a NO es mayor que b");
  }


  a = 3; // AHORA a tiene el valor de 3. "Pise" el valor anterior
  Serial.println("");
  Serial.println("¿Es menor o igual que b?  ");
  if (a <= b)
  {
     Serial.print("-> a es menor o igual que b");
  }
  else
  {
     Serial.print("-> a NO es menor o igual que b");
  }
  
  a = 4;
  Serial.println("");
  Serial.println("¿Es mayor o igual que b? ");
  if (a >= b)
  {
     Serial.print("-> a es mayor o igual que b");
  }
  else
  {
     Serial.print("-> a NO es mayor o igual que b");
  }
  

  Serial.println("");
  Serial.println("¿Es igual que b? ");
  if (a == b)
  {
     Serial.print("-> a es igual que b");
  }
  else
  {
     Serial.print("-> a NO es igual que b");
  }
  
  b = 4;
  Serial.println("");
  Serial.println("¿Es igual que b? ");
   if (a == b)
  {
     Serial.print("-> a es igual que b");
  }
  else
  {
     Serial.print("-> a NO es igual que b");
  }
/*
        ¡¡¡¡¡ACLARACION !!!!!!

        NO CONFUNCION EL OPERADOR = (un solo igual, se usa para asignar!!)

        CON  == (operador de pregunta si dos valores son iguales )


*/

  b=1;
  Serial.println("");
  Serial.println("¿Es distinto que b?  ");
  if(a != b)// != significa distinto
    Serial.print("-> a es distinto que b!");
  else
    Serial.print("-> a NO es distinto que b!");

   b = 4;
  Serial.println("");
  Serial.println("¿Es distinto que b?  ");
  if(a != b)
    Serial.print("-> a es distinto que b!");
  else
    Serial.print("-> a NO es distinto que b!");



    while(1);
    // la estructura de control while es como la funcion loop repetira infinitas veces lo que tenga en su interior mientras la condicion (cualquiera de las vistas en las lineas de arriba) sea verdadera o devuelvan un 1 o verdadero, en este caso 1 sera verdadero
    // y como no tiene nada adentro se queda "perdiendo tiempo" sin hacer nada en el while
    // si el while contiene varias instrucciones, entonces no debe ir ; sino que {} en su defecto.  



    //EJERCICIO: AGREGAR ADENTRO DEL WHILE UNA SECUENCIA QUE SE PRENDA Y APAGUE UN LED CADA UN 1Hz
}
