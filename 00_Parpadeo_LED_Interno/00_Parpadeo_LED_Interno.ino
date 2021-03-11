//**************************************************************//
//************CONFIGURACION DEL HARDWARE A UTILIZAR*************//
/*
 *  setup(), todas las instrucciones que estan contenidas entre {} (llaves), solo ejecutaran una vez
*/
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}
//**************************************************************//
//************FIN CONFIGURACION DEL HARDWARE A UTILIZAR*********//


//**************************************************************//
//*****************COMIENZO DE MI APLICACION********************//
/*
  loop(), todas las instrucciones que estan contenidas entre {} (llaves), seran ejecutadas infinitas veces.
  Lo que quiere decir es que cuando se termine de ejecutar la ultima instruccion, se ejecutara la primera instruccion de vuelta,
  Completando asi el ciclo infinitas veces.
*/
void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}
//********************FIN DE MI APLICACION********************//
//************************************************************//
