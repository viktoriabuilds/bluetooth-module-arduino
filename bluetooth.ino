


#include <SoftwareSerial.h>
#define BT Serial1

void setup() {
  Serial.begin(9600);
  BT.begin(9600);
  Serial.println("Bluetooth Mega Ready");
}

void loop() {
  if (Serial.available()) {
    char c = Serial.read();
    BT.write(c);
  }

  if (BT.available()) {
    char c = BT.read();
    Serial.write(c);
  }
}