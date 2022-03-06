
#define trigPin 11 //trigpin, echopin yazdığına göre HC-SR04 ULTRASONIK SENSOR kullanıldığını anlıyoruz. 
#define echoPin 10
#define led1 7
#define led2 6
#define led3 5
#define led4 4
#define led5 3


void setup() {
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
}

void loop() {
  long duration, distance;
  digitalWrite(trigPin, LOW); 
  delayMicroseconds(2); 
  digitalWrite(trigPin, HIGH);

  delayMicroseconds(40); 
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;
   digitalWrite(led1,LOW); 
      digitalWrite(led2,LOW);
      digitalWrite(led3,LOW);
      digitalWrite(led4,LOW);
      digitalWrite(led5,LOW);
  if ((distance < 25)&(distance >= 30)) {        // eğer mesafe 30'dan küçük, 20'ye eşit ya da büyükse 
      digitalWrite(led1,HIGH);                    // led1'e güç ver
      digitalWrite(led2,LOW);                     // led2'ye güç verme
      digitalWrite(led3,LOW);                     // led3'ye güç verme
      digitalWrite(led4,LOW);                     // led4'ye güç verme
      digitalWrite(led5,LOW);                     // led5'ye güç verme

}
  else if ((distance < 20)&(distance >= 15)) {   // eğer mesafe 20'dan küçük, 15'e eşit ya da büyükse 
      digitalWrite(led1,HIGH);                    // led1'e güç ver
      digitalWrite(led2,HIGH);                    // led2'e güç ver
      digitalWrite(led3,LOW);                     // led3'ye güç verme
      digitalWrite(led4,LOW);                     // led4'ye güç verme
      digitalWrite(led5,LOW);                     // led5'ye güç verme

}
  else if ((distance <15 )&(distance >= 10)) {   // eğer mesafe 15'dan küçük, 10'a eşit ya da büyükse 
      digitalWrite(led1,HIGH);                     // led1, led2, led3'e güç ver
      digitalWrite(led2,HIGH);
      digitalWrite(led3,HIGH);
      digitalWrite(led4,LOW);                      // led4, led5'e güç verme
      digitalWrite(led5,LOW);

}
  else if ((distance < 10)&(distance >= 5)) {    // eğer mesafe 10'dan küçük, 5'e eşit ya da büyükse 
      digitalWrite(led1,HIGH);                     // 4 led'e güç ver, 1 led'e güç verme
      digitalWrite(led2,HIGH);
      digitalWrite(led3,HIGH);
      digitalWrite(led4,HIGH);
      digitalWrite(led5,LOW);

}
  else if (distance < 5) {                       // eğer mesafe 5'dan küçükse
      digitalWrite(led1,HIGH);                     // tüm ledlere güç ver
      digitalWrite(led2,HIGH);
      digitalWrite(led3,HIGH);
      digitalWrite(led4,HIGH);
      digitalWrite(led5,HIGH);

}
  if (distance >= 200 || distance <= 0){         // eğer (if) mesafe 200'den büyük veya eşit ise; 0'dan küçük yada eşit ise
    Serial.println("Mesafe Olculemiyor");        // Seri port ekranına "mesafe ölçülemiyor" yazısı yaz
  }
  else {
    Serial.print(distance);
    Serial.println(" cm");                   // Seri Port Ekranına baktığınızda ölçümü cm cinsinden görebilirsiniz.
  }
  delay(500);
}


// Dol Academy eğitim içeriğinden de ulaşabilirisiniz...
