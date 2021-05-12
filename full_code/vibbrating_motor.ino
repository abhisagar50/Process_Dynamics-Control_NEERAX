unsigned long currentTime;
const int sensor1=A0;
#include "dht.h"
#define dht_apin1 A0
#define dht_apin2 A1
 unsigned long previousMillis1 = 0;
 unsigned long previousMillis = 0;
int exhaust=0;
dht DHT;

float tempc;
void setup() {
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  //pinMode(sensor,INPUT); 
  //Serial.begin(9600);
  digitalWrite(7,HIGH);
  pinMode(8,HIGH);
  Serial.begin(9600);
  delay(500);
  Serial.println("DHT11 Humidity & temperature Sensor\n\n");
  delay(1000);
  
  
}

void loop() {
  DHT.read11(dht_apin1);
  unsigned long currentMillis = millis();
  if (currentMillis - previousMillis1 ==2000 and exhaust==0 ) {
    previousMillis1=currentMillis;
    digitalWrite(8,HIGH);
    exhaust=1;
  }
  else if (currentMillis-previousMillis1==1000 and exhaust==1){
    // save the last time you blinked the LED
    previousMillis1 = currentMillis;
    exhaust=0;
    digitalWrite(8,LOW);}
  
   
   if (currentMillis-previousMillis==500){
    DHT.read11(dht_apin1);
    previousMillis=currentMillis;
     Serial.print("Current humidity inside = ");
    Serial.println(DHT.humidity);
    Serial.print("%  ");
    Serial.print("temperature inside = ");
    Serial.print(DHT.temperature); 
    Serial.println("C  ");
    DHT.read11(dht_apin2);
    Serial.print("Current humidity outside = ");
    Serial.println(DHT.humidity);
    Serial.print("%  ");
    Serial.print("temperature outside = ");
    Serial.print(DHT.temperature); 
    Serial.println("C  ");}
    
    
    

 
 
 

  
}
