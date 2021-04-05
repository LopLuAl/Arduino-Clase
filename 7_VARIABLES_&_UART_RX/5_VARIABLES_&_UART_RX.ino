int dato_entrante = 0;  // Declaro Variable llamada dato_entrante de tipo ENTERO

void setup() {
  Serial.begin(9600);   // Inicializo el puerto serie
}

void loop() {
  // SOLO LEO DATOS SI EL PUERTO ESTA DISPONIBLE
  if (Serial.available() > 0) {
    // LEO EL DATO QUE MANDE POR EL PUERTO SERIE Y LO GUARDO EN dato_entrante
    dato_entrante = Serial.read();

    Serial.print("I received: ");
    Serial.println(dato_entrante, DEC); // IMPRIMO EN PANTALLA EL DATO QUE RECIBI
  }
}
