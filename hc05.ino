#include <SoftwareSerial.h>

SoftwareSerial hc(6, 7); 

void setup() 
{
  Serial.begin(9600);
  hc.begin(38400);  
}

void loop()
{
  
  if (hc.available()) {
    Serial.write(hc.read());
  }

  if (Serial.available()){
    hc.write(Serial.read());
  }
}
