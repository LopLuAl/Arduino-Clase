
#include "RTClib.h"

RTC_DS3231 rtc;

char dias[7][12] = {"Domingo", "Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado"};

void setup () {


  Serial.begin(9600);

  if (! rtc.begin()) 
  {
    Serial.println("Hubo problemas al inicializar el RTC");
    while (1);
  }
  //"automatico"
  //ajusto EL RTC con la hora y fecha al momenot de subir  el sketch
    rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));
  
  //manual
  //DateTime (y, m, d, hh, mm, ss);
  //rtc.adjust(DateTime(2000,01,02,00,01,30));
}

void loop () {
    DateTime now = rtc.now();

    Serial.print(now.year(), DEC);
    Serial.print('/');
    Serial.print(now.month(), DEC);
    Serial.print('/');
    Serial.print(now.day(), DEC);
    Serial.print(" (");
    Serial.print(dias[now.dayOfTheWeek()]);
    Serial.print(") ");
    Serial.print(now.hour(), DEC);
    Serial.print(':');
    Serial.print(now.minute(), DEC);
    Serial.print(':');
    Serial.print(now.second(), DEC);
    Serial.println();


    Serial.print("Temperatura: ");
    Serial.print(rtc.getTemperature());
    Serial.println(" C");

    Serial.println();
    delay(3000);
}
