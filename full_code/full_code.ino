#include "dht.h"
#define dht_apin A0 // Analog Pin sensor is connected to
 
dht DHT;
unsigned long currentTime;
const int sensor2=A1;
const int sensor1=A0;
unsigned long cloopTime;
void setup() {
  Serial.begin(9600);
  currentTime = millis();
   cloopTime = currentTime;
  // put your setup code here, to run once:

}

void loop() {
  currentTime = millis();
   //DHT.read11(dht_apin);
    
     //Serial.print("Current humidity = ");
    //Serial.print(DHT.humidity);
    //Serial.print("%  ");
//int   vout=analogRead(sensor2);
// vout=(vout*500)/1023;
//float tempc=vout; // Storing value in Degree Celsius
 
//Serial.print("temperature of peltier-");
//Serial.print(tempc);
//Serial.print("deg. C");


   // Every second, calculate and print litres/hour
   if(currentTime >= (cloopTime + 10000)){
    cloopTime=currentTime;
    digitalWrite(13,HIGH);
    delay(5000);
    digitalWrite(13,LOW);
    digitalWrite(7,HIGH);
    delay(5000);
    digitalWrite(7,LOW);
    
   }
  // put your main code here, to run repeatedly:

}
