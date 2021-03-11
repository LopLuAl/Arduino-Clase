// Pongo una macro para los pines que voy a utilizar 
 #define stepPin 8 
 #define dirPin  9
 #define outputA 10
 #define outputB 11
 
 int cuenta = 0;
 int Eactual;
 int UtlimoE;  
 
void setup() 
{

  pinMode (outputA,INPUT );
  pinMode (outputB,INPUT );
  
  UtlimoE = digitalRead(outputA);
} 
void loop() 
{
  Eactual = digitalRead(outputA);
  
  if (Eactual != UtlimoE)
  {     
     if (digitalRead(outputB) != Eactual) 
     { 
       cuenta ++;
     }
     else
     {
       cuenta--;
     }
  }
  UtlimoE = Eactual;
}
