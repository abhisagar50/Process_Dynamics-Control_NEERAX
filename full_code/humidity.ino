#include "dht.h"
#define dht_apin1 A0
#define dht_apin2 A1// Analog Pin sensor is connected to

dht DHT;
 
void setup(){
 
  Serial.begin(9600);
  delay(500);//Delay to let system boot
  Serial.println("DHT11 Humidity & temperature Sensor\n\n");
  delay(1000);//Wait before accessing Sensor
  
 
}//end "setup()"
 
void loop(){
  //Start of Program 
    
 
     DHT.read11(dht_apin1);
   
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
    Serial.println("C  ");
    
    delay(1000);//Wait 5 seconds before accessing sensor again.
 
  //Fastest should be once every two seconds.
 
}// end loop() 
