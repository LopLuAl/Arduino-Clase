#include <LiquidCrystal.h> // Incluyo la biblioteca a utilizar


const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2; // declaro los pines que voy a utilizar

LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup()
{

  lcd.begin(16, 2); // Inicializco el LCD e indico las medidas en nuestro caso trabajaremos con un display de 16 * 2

}

void loop() {

  lcd.setCursor(0, 1);  // Posiciono el cursor, las coordenadas cartesianas X , Y
  lcd.print("Holis!!"); // Imprimo texto en el display
  lcd.setCursor(1, 1); // Posiciono nuevamente el cursor
  lcd.print(millis() / 1000); // Imprimo el tiempo que el Arduino estuvo energizado

}
