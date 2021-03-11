#include "DHT.h"

#define DHTPIN 2          // Defino el pin que voy a utlizar para conectar el DHT
#define DHTTYPE DHT11     // Defino el tipo de sensor que voy a usar en nuestro caso DHT 11 tambien existe el DHT22


DHT dht(DHTPIN, DHTTYPE);

void setup()
{
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  delay(2000);


  float h = dht.readHumidity();

  float t = dht.readTemperature();

  float f = dht.readTemperature(true);

  if (isnan(h) || isnan(t) || isnan(f)) {
    Serial.println(F("Fallo al leer"));
    return;
  }
  Serial.print(F("Humedad: "));
  Serial.print(h);
  Serial.print(F("%  Temperatura: "));
  Serial.print(t);
  Serial.print(F("°C "));
  Serial.print(f);

}
