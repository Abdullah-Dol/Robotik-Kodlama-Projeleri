
const int LEDdizisi[] = {2,3,4,5,6,7,8};
void setup () {
for(int i=0; i<7 ;i++) /* for döngüsüyle led dizisine ulaşıyoruz.. */

{

pinMode(LEDdizisi[i], OUTPUT); /* LED pinleri cikis olarak ayarladık */

}
}

void loop() {
for(int i=0; i<7; i++) /* Tum LEDleri sirayla 60 milisaniye yakip sonduruyoruz */
{

digitalWrite(LEDdizisi[i],HIGH);
delay(60);
digitalWrite(LEDdizisi[i],LOW);

}

for(int j=6;j>-1; j--)
/* LEDleri geri yonde 60 milisaniye yakip sonduruyoruz */

{
digitalWrite(LEDdizisi[j],HIGH);
delay(60);
digitalWrite(LEDdizisi[j], LOW);

}
}

// Dol Academy eğitim içeriğinden de ulaşabilirisiniz...
