

#include <DHT.h>
#include <DHT_U.h>
#include "LED.h"

LED pomp(3);
LED svet(4);
LED vent(5);
#define DHTPIN 2
DHT dht(DHTPIN, DHT11);
void setup() {
  Serial.setTimeout(10);
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  if (Serial.available() > 1) {
    

    char key = Serial.read();


    switch(key)
    {
      case 'a': 
        pomp.on();
        break;
      case 'b': 
        pomp.off();
        break;
      case 'c': 
        svet.on();
       break;
      case 'd': 
        svet.off();
        break;
      case 'e': 
        vent.on();
        break;
      case 'f': 
        vent.off();
        break;
      case 't':
        float t = dht.readTemperature();
        Serial.print(t);
        break;
    }

  }
}
  //float h = dht.readHumidity(); //Измеряем влажность
  //float t = dht.readTemperature(); //Измеряем температуру
  //Serial.print(h);
  //Serial.print(t);
