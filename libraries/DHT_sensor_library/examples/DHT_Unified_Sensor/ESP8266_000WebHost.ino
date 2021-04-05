#include <SD.h>

#include <ESP8266WiFi.h>
//#include <ArduinoJson.h> 
 
const char* ssid     = "Fibertel FK 2.4";
const char* password = "siemprejuntos";
const char* host = "plataformaiot.000webhostapp.com"; //replace it with your webhost url
String url;
  int count = 0;
void setup() {
  Serial.begin(115200);
  delay(100);
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
  digitalWrite(D1, 0);
  digitalWrite(D2, 0);
  digitalWrite(D3, 0);
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
  digitalWrite(D1, 1);
  delay(500);
  digitalWrite(D1, 0);
  delay(500);
}
void loop() {

  Serial.print("connecting to ");
  Serial.println(host);

  WiFiClient client;
  const int httpPort = 80;
  if (!client.connect(host, httpPort)) {
    Serial.println("connection failed");
    return;
  }

  if (count == 0){
    url = "/insert.php?temp=222.20&hum=32";
           
    count = count + 1;
    Serial.println("Here1");
  }
  else if (count == 1){
    url = "/insert.php?temp=220.20&hum=33";
    count = count + 1;
    Serial.println("Here2");
  }
  else if (count == 2){
    url = "/insert.php?temp=21.20&hum=34";
    count = count + 1;
    Serial.println("Here3");
  }
  Serial.print("Requesting URL: ");
  Serial.println(url);
  
  client.print(String("GET ") + url + " HTTP/1.1\r\n" +
               "Host: " + host + "\r\n" + 
               "Connection: close\r\n\r\n");
  Serial.println();
  Serial.println("closing connection");
  delay(3000);
}
