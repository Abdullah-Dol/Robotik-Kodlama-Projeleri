

int ledPin = 5; // Led'i 5 numaralı pine tak
int buttonApin = 8;   // Buton A'yı 9 numaralı pine tak
int buttonBpin = 9;   // Buton B'yi 8 numaralı pine tak

void setup() 
{
  pinMode(ledPin, OUTPUT);
  pinMode(buttonApin, INPUT_PULLUP);  
  pinMode(buttonBpin, INPUT_PULLUP);  
}

void loop()   // Döngü(loop) işlevi sonsuza kadar tekrar tekrar çalışır.
{
  if (digitalRead(buttonApin) == LOW)   // if (Eğer) Buton A'ya basılırsa 
  {
    digitalWrite(ledPin, HIGH);         // Güç ver
  }
  if (digitalRead(buttonBpin) == LOW)   // if (Eğer) Buton B'ye basılırsa 
  {
    digitalWrite(ledPin, LOW);          // Gücü kes
  }
}


// Dol Academy eğitim içeriğinden de ulaşabilirisiniz...
