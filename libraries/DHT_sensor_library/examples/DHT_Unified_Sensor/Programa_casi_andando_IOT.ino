#include <ESP8266WiFi.h>
#include <DHT.h>

#define DHTPIN D1
#define DHTTYPE DHT11 
 
const char* ssid     = "Telecentro-6648";
const char* password = "tele-2347748";
const char* host = "http://plataformaiot.000webhostapp.com";
DHT dht(DHTPIN, DHTTYPE);

// Incluimos librería

 





void setup() {




  
  Serial.begin(115200);
  delay(100);
  dht.begin();
  Serial.println();
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);
  
  WiFi.begin(ssid, password); 
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
 
  Serial.println("");
  Serial.println("WiFi connected");  
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
  Serial.print("Netmask: ");
  Serial.println(WiFi.subnetMask());
  Serial.print("Gateway: ");
  Serial.println(WiFi.gatewayIP());
}
void loop() {

  delay(5000);
 
  // Leemos la humedad relativa
  float h = dht.readHumidity();
  // Leemos la temperatura en grados centígrados (por defecto)
  float t = dht.readTemperature();
h=t=0;
  if (isnan(h) || isnan(t)) {
    Serial.println("Failed to read from DHT sensor!");
    DHT dht(DHTPIN, DHTTYPE);
 dht.begin();
    return;
  }
   DHT dht(DHTPIN, DHTTYPE);
 dht.begin();
 Serial.println(h);
 Serial.println(t);
  Serial.print("connecting to ");
  Serial.println(host);

  WiFiClient client;
  const int httpPort = 80;
  if (!client.connect(host, httpPort)) {
    Serial.println("connection failed");
    return;
  }
  /*
  String url = "/insert.php?temp=" + String(t) + "&hum="+ String(h);
  Serial.print("Requesting URL: ");
  Serial.println(url);
  
  client.print(String("GET ") + url + " HTTP/1.1\r\n" +
               "Host: " + host + "\r\n" + 
               "Connection: close\r\n\r\n");*/
  delay(500);
  client.print("http://plataformaiot.000webhostapp.com/insert.php?temp=20.20&hum=30/");
  while(client.available()){
    String line = client.readStringUntil('\r');
    Serial.print(line);
  }
  
  Serial.println();
  Serial.println("closing connection");
  delay(3000);
}
