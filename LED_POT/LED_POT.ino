int led1 = 2; //2.digital pini led1 değişkenine atadık

int led2 = 3; //3.digital pini led2 değişkenine atadık

int led3 = 4; //4.digital pini led3 değişkenine atadık

int buzzer4 = 5; //5.digital pini buzzer4 değişkenine atadık

int pot = A0; //A0 analog pini pot değişkenine atadık

int potdeger; //Kodlarımız içerisinde kullanacağımız potdeger değişkenini oluşturduk

void setup() {

pinMode(led1, OUTPUT); //led1 i çıkış olarak ayarladık

pinMode(led2, OUTPUT); //led2 yi çıkış olarak ayarladık

pinMode(led3, OUTPUT); //led3 ü çıkış olarak ayarladık

pinMode(buzzer4, OUTPUT); //led4 i çıkış olarak ayarladık

pinMode(pot, INPUT); //pot u giriş olarak ayarladık

}

void loop() {

potdeger= analogRead(pot); //pot değişkenine atadağımız A0 pinini dinliyoruz ve değerini potdeger değişkenine atıyoruz

if (potdeger<250){ //potdeger 250 den küçükse hiçbir ledi yakma

digitalWrite(led1, LOW);

digitalWrite(led2, LOW);

digitalWrite(led3, LOW);

digitalWrite(buzzer4, LOW);

}

if (potdeger>250){ //potdeger 250 den büyükse sadece led1 i yak

digitalWrite(led1, HIGH);

digitalWrite(led2, LOW);

digitalWrite(led3, LOW);

digitalWrite(buzzer4, LOW);

}

if (potdeger>500){ //potdeger 500 den büyükse led1 i ve led2 yi yak

digitalWrite(led1, HIGH);

digitalWrite(led2, HIGH);

digitalWrite(led3, LOW);

digitalWrite(buzzer4, LOW);

}

if (potdeger>750){ //potdeger 750 den büyükse led1 i, led2 yi ve led3 ü yak

digitalWrite(led1, HIGH);

digitalWrite(led2, HIGH);

digitalWrite(led3, HIGH);

digitalWrite(buzzer4, LOW);

}

if (potdeger>1000){ //potdeger 1000 den büyükse tüm ledleri yak ve buzzer çalışsın

digitalWrite(led1, HIGH);

digitalWrite(led2, HIGH);

digitalWrite(led3, HIGH);

digitalWrite(buzzer4, HIGH);

}

}

// Dol Academy eğitim içeriğinden de ulaşabilirisiniz...
