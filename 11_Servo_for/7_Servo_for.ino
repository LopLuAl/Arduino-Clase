#include <Servo.h>

Servo myservo;

int grados = 1;

void setup()
{
  myservo.attach(9);
}

void loop()
{
  myservo.write(65);
  delay(15);

  for ( grados= 0; grados < 150; grados ++)
  {
    serial.println("Grados")
    myservo.write(grados);
    delay(10);
  }
}
