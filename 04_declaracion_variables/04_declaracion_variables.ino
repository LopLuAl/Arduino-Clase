// tipoDeVariable nombreDeLaVariable = valorInicial;

          int            unaVariable =    1500;
          float       sensorCalbrate = 1.117; //Floating-point numbers can be as large as 3.4028235E+38 and as low as -3.4028235E+38. They are stored as 32 bits (4 bytes) of information.
          bool              running  =  false; // 

          char               myChar  = 'A';
          char               my_Char = 65; // both are equivalent
          int                     x       ;

/*           ¡¡MATRICES, VECTORES O ARRAYS!!                       */
          int               myInts [6];

//                                 Posiciones del vector
                                    //  0  1  2  3  4
//                                      |  |  |  |  |
          int               myPins[] = {2, 4, 8, 3, 6};
          int          mySensVals[6] = {2, 4, -8, 3, 2};
          char            message[6] = "hello";

          byte                   var = 0xFF;  //A byte stores an 8-bit unsigned number, from 0 to 255
void setup() {
  // put your setup code here, to run once:

}

void loop() 
{

if(mySensVals[0] == 2 && mySensVals[1] == 4)    // AND LOGICA quiere decir que SI LAS DOS condiciones se cumplen, entonces entramos en el if
  Serial.println("Comparacion de dos elementos de un array!");

if(mySensVals[3] == 3 || mySensVals[4] == 1)    // OR LOGICA quiere decir que SI UNA DE LAS DOS O LAS DOS condiciones se cumplen, entonces entramos en el if
  Serial.println("Comparacion de dos elementos de un array!");
  
/*
  Asignar un valor a un elemento del array
*/
x = mySensVals[4];

unaVariable = unaVariable *2; // Mutiplico unaVariable por dos y lo vuelvo a guardar en unaVariable

unaVariable = unaVariable - 1; // Que hago aca?

unaVariable = unaVariable + 1;// Que hago aca?

unaVariable++;// Que hago aca?

unaVariable = 10;// Que hago aca?

unaVariable = unaVariable /2;;// Que hago aca?


for (byte i = 0; i < 5; i++) 
{
  Serial.println(myPins[i]);
}
}
