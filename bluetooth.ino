
#include <SoftwareSerial.h>

SoftwareSerial bluetooth(6, 7);

void setup() {
  Serial.begin(9600);
  bluetooth.begin(38400);
}

void loop() {
  
  if (bluetooth.available() > 0) {
    char incomingData = bluetooth.read();    
    Serial.print(incomingData);
  }
}
