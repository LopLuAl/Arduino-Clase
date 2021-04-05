                          // DEFINE: Se llaman "Macros" al momento de compilar
#define S0 4              // Sirven para lograr una mayor compresion del sketch y volver el codigo mas portable
#define S1 5              // El pre-procesador reemplazar el valor de la izquierda por el valor de la derecha
#define S2 6              // Ejemplo: En el sketch S2 sera reemplazado por 6 al momento de compilar
#define S3 7  
#define sensorOut 8

int frequency = 0;        // Declaracion de variable tipo global
/*
  Funciones: Las funciones sirven para contener  partes  de   codigos  que son utilizados varias veces
  agrupadas en otros sectores del sketch fuera del loop por ejemplo, permitiendo asi optimizar la 
  lectura y compresion del codigo.
 
  El codigo contenido por una funcion puede estar situado en cualquier parte del sketch. 
  Hay que tener en cuenta que si el codigo contenido por la funcion esta situada debajo de la funcion loop se debera colocar el 
  prototipo de la misma que no es ni mas ni menos que la primera linea de la funcion que termina en punto y coma ";" arriba del loop.
  
  Dato que   Nombre de      Dato que 
  devuelve   la funcion     recibe
  ||           ||             ||
  int        leer_rojo     ( void )
   {
   } 
  ||
  El codigo entero esta contenido entre llaves

  Los datos pueden ser de tipo INT,CHAR,BYTE,DOUBLE,FLOAT entre otros.
  Un caso particular es cuando a la izquierda o derecha del nombre de la funcion esta la palabra VOID.
  VOID significa vacio, lo que quiere decir esto es que la funcion no va a devolver o recibir nada.

  Si tomamos el ejemplo de la funcion leer_rojo devuelve un intero y no recibe ningun dato.
  
  ¿Es complicado?
  ¡Para nada, veamos!
*/
int leer_rojo ();         // Prototipo de la funcion
int leer_azul ();
int leer_verde();

void setup() {
  pinMode(S0, OUTPUT);  
  pinMode(S1, OUTPUT);
  pinMode(S2, OUTPUT);
  pinMode(S3, OUTPUT);
  pinMode(sensorOut, INPUT);
  
  // Setting frequency-scaling to 20%
  digitalWrite(S0,HIGH);
  digitalWrite(S1,LOW);
  
  Serial.begin(9600);
}
void loop() 
{
  
  int color_rojo,color_verde,color_azul; // Declaracion de variables de tipo local



  /*
       Lo que devuelve             Usamos el     Nombre de                  Fijense que
  la funcion lo almacenamos           '='           la              entre parentesis no hay nada
      En estas variables          para asignar    funcion          Ya que en el prototipo hay void
                                                                        Osea no recibe NADA!!
            ||                        | |           ||                        ||
  */
       color_rojo                      =        leer_rojo                    ( ); // Asi llamamos  a la funcion 
       color_verde                     =        leer_verde                   ( );
       color_azul                      =        leer_azul                    ( );
 
  Serial.print("R= ");
  Serial.print(color_rojo);
  Serial.println("  ");
  Serial.print("G= ");
  Serial.print(color_verde);
  Serial.println("  ");
  Serial.print("B= ");
  Serial.print(color_azul);
  Serial.println("  ");
  
}
int leer_rojo(void)
{
  int valor;
  // Configuro para leer los valores de ROJO
  digitalWrite(S2,LOW);
  digitalWrite(S3,LOW);
  // Leo el valor
  valor = pulseIn(sensorOut, LOW);
  valor = map(valor, 25,72,255,0);
  delay(100);
  return valor;
}

int leer_azul(void)
{
  int valor;
  // Configuro para leer los valores de AZUL
  digitalWrite(S2,HIGH);
  digitalWrite(S3,HIGH);
  // Leo el valor
  valor = pulseIn(sensorOut, LOW);
  valor = map(valor, 25,70,255,0);
  delay(100);
  return valor;  // Devuelvo la variable "valor" para que pueda ser usada en el loop
}

int leer_verde(void)
{
  int valor;
  // Configuro para leer los valores de VERDE
  digitalWrite(S2,LOW);
  digitalWrite(S3,HIGH);
  // Leo el valor
  valor = pulseIn(sensorOut, LOW);
  valor = map(valor, 30,90,255,0);
  delay(100);
  return valor;
}
