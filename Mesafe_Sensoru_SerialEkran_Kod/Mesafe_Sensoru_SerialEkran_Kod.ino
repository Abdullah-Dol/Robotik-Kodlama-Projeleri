
byte trigger = 10;     // Sensörün Trigger bacağının bağlı olduğu pin
byte echo = 11;        // Sensörün Echo bacağının bağlı olduğu pin

unsigned long sure; // Echo bacağının kac mikro saniyede aktif olduğunu saklayacak olan değişken 
double toplamYol; 
int aradakiMesafe; 


void setup() {
  pinMode(trigger, OUTPUT);    // Sensörün Trigger bacağına gerilim uygulayabilmemiz için OUTPUT yapıyoruz.
  pinMode(echo, INPUT);        // Sensörün Echo bacağındaki gerilimi okuyabilmemiz için INPUT yapıyoruz.
  Serial.begin(9600); 
}
void loop()
{
  /* Başlangıçta LOW durumda olan trigger bacağına gerilim uygulayıp ardından gerilimi keserek bir ses dalgası
  oluşturmuş oluyoruz. Bu işlem arasında 10 mikro saniye beklenmenin sebebi HC-SR04'ün en az 10 mikro saniyelik 
  dalgalar ile çalışmasıdır. */
  digitalWrite(trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger, LOW);

  // Dalga üretildikten sonra geri yansıyıp Echo bacağının HIGH duruma geçireceği süreyi pulseIn fonksiyonu ile 
  // kaydediyoruz. 
  sure = pulseIn(echo, HIGH);

  // Aşağıda yapılan süre-mesafe dönüşüm işlemleri yazımızda açıklanmıştır. 
  toplamYol = (double)sure*0.034;
  aradakiMesafe = toplamYol / 2;
  
  Serial.print("Ses dalgasinin geri donus suresi :");
  Serial.print(sure);
  Serial.println("mikro saniye");
  
  Serial.print("Ses dalgasinin toplam kat ettigi yol :");
  Serial.print(toplamYol);
  Serial.println("cm.");
  
  Serial.print("HC-SR04 ile karsisindaki yuzey arasindaki mesafe :");
  Serial.print(aradakiMesafe);
  Serial.println("cm.\n\n");

  delay(2000);
}

// Dol Academy eğitim içeriğinden de ulaşabilirisiniz...
