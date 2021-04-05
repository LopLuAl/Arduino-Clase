#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <WiFiServer.h>
// Replace these with your WiFi network settings
const char* ssid = "UNIX-WLAN"; //replace this with your WiFi network name
const char* password = "victorianolasabe_1"; //replace this with your WiFi network password

void setup()
{
  delay(1000);
  Serial.begin(115200);
 
  WiFi.begin(ssid, password);

  Serial.println();
  Serial.print("Connecting");
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
  }

  Serial.println("success!");
  Serial.print("IP Address is: ");
  Serial.println(WiFi.localIP());
}

void loop() {
  WiFiClient client;
  if (client.available())
  {
  client.println("HTTP/1.1 200 OK");
          client.println("Content-Type: text/html");
          client.println("<HTML>");
          client.println("<HEAD>");
          client.println("<TITLE>Bridge .203</TITLE>");
          client.println("</HEAD>");
          client.println("</HTML>");
  }
}
