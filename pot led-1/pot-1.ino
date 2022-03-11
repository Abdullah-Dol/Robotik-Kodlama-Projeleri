#include <Arduino.h>
#include <Wire.h>
#include <SoftwareSerial.h>

double angle_rad = PI/180.0;
double angle_deg = 180.0/PI;
double PWM;

void setup(){
    pinMode(A0+5,INPUT);
    pinMode(5,OUTPUT);
}

void loop(){
    PWM = (analogRead(A0+5)) * (0.25);
    analogWrite(5,PWM);
    loop();
}


// Dol Academy eğitim içeriğinden de ulaşabilirisiniz...
