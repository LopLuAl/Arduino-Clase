int dato_entrante =  0; 

void setup()
{
  Serial.begin(9600); 
}

void loop() {
  
  if (Serial.available() > 0)
  {
    
    dato_entrante = Serial.read();

    
    Serial.print("Recibi   =>     ");
    Serial.println(dato_entrante, DEC); // Envio por puerto serie el dato y sera representado en formato DECIMAL!
  }
}
