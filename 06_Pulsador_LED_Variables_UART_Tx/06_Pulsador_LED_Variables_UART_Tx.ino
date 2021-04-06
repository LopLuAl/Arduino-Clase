
const int buttonPin = 2;    
const int ledPin =  13;      
int i = 0;
int buttonState,next = 0;         

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);


   Serial.begin(9600);
   Serial.println("HOLA MUNDO!");
}

void loop() {
  buttonState = digitalRead(buttonPin);
  if (i<20)
  {
   
    if (buttonState == HIGH)
    {
      digitalWrite(ledPin, HIGH);
      Serial.println("LED PRENDIDO");
      i++;
    } else 
    {
      digitalWrite(ledPin, LOW);
      Serial.println("LED APAGADO");
      i=0;
    }   
  }
  
}
