int gPWMval;  // Todas las variables declaradas fuera de una funcion seran llamdas variables globales. Su valor puede ser modificado desde cualquier funcion

void setup() {
  // put your setup code here, to run once:
  //i = 2;   --> ERROR!!! la variable i es de ambito local y solo es vista y modificada desde el loop
  gPWMval = 3;// gPWMval si puede ser modificada ya que es de ambito global
}


void funcion_1(){
 
  // FIJENSE QUE DECLARE UNA VARIABLE DE AMBITO LOCAL QUE SE LLAMA IGUAL UNA VARIABLE DE AMBITO LOCAL LLAMADA i DECLARADA EN EL LOOP
  // ASIGNE A i EL VALOR DE 15. PERO NO TIENE NADA QUE VER CON LA VARIABLE LLAMADA i EN EL LOOP.
  
  
  int i;
  
  i = 15;
  
  
  }
void loop()
{
   gPWMval = 20;// gPWMval si puede ser modificada ya que es de ambito global. El valor que tomara sera el ultimo que se le asigno
  int i;    // "i" is only "visible" inside of "loop"
  float f;  // "f" is only "visible" inside of "loop"
   i = 30;  
}
