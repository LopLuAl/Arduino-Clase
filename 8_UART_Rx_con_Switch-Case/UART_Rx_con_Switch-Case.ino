int datos;
void setup() 
{
  
  Serial.begin(9600); // Configuro el puerto serie a 9600 Bauds
}

void loop() 
{

  if (Serial.available() > 0)         // Si lo que esta dentro del if es UNA SOLA SENTENCIA
                                      // Entonces puedo omitir las llaves
    datos = Serial.read();            // Leo los datos que me llegaron por el puerto serie y los almaceno en 
    
  
  switch (datos) 
  {
    case 1:
      Serial.println("Recibi el 1!!!  :)");
      Serial.print(datos);
    break;
    case 2:
      Serial.println("Recibi el 2!!!  :)");
      Serial.print(datos);
    break;
    case 3:
      Serial.println("Recibi el 3!!!  :D");
      Serial.print(datos);
    break;
    case 70:
      Serial.println("Recibi el 70!!! :D");
      Serial.print(datos);
    break;
    default:
      Serial.println("Nada de lo que recibi coincide con mis cases!! :("); 
    break;
  }

}
