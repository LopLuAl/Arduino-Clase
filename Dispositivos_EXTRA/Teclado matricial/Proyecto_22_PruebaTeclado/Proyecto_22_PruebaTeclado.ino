#include <Keypad.h>

const byte filas = 4;     //Numero de filas del teclado
const byte columnas = 3;  //Numero de columnas del teclado

//Defino una matriz 4x3 con la posicion de las filas y columnas
char matriz[filas][columnas] =
{

  { '1', '2', '3'},
  { '4', '5', '6'},
  { '7', '8', '9'},
  { '*', '0', '#'},

};

byte pinesFilas[filas] = {9, 8, 7, 6};       //Pines donde van conectadas las filas del teclado
byte pinesColumnas[columnas] = {5, 4, 3}; //Pines donde van conectadas las columnas del teclado

//Inicializo el teclado con el numero de filas, columnas, los pines del Arduino utilizados y la matriz
Keypad teclado = Keypad( makeKeymap(matriz), pinesFilas, pinesColumnas, filas, columnas);

int Hora, Minutos = 0; //declaramos las variables para el reloj

void setup()
{
  Serial.begin(9600);   //Inicializo el puerto serie
 
}

void loop()
{
  char tecla_presionada = teclado.getKey();    //Almaceno en una variable la tecla presionada

  if (tecla_presionada)
  {
    Serial.println(tecla_presionada);   //Muestra la tecla presionada en el monitor seri
  }
  
  Serial.println ("Configure el reloj");
  Serial.println ("Ingrese los minutos");
  Minutos = (int) tecla_presionada * 10;
  tecla_presionada = teclado.getKey ();
  Minutos = Minutos + (int) tecla_presionada ;
  
  Serial.println ("Ingrese la hora");
  Hora = (int) tecla_presionada * 10;
  tecla_presionada = teclado.getKey ();
  Hora = Hora + (int) tecla_presionada ;
  
  
}
