#include <math.h>
int value;
int ref;
float R = 1000.;
void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
pinMode(10, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(10,HIGH);
  delay(10);
  value = analogRead(5);
  delay(10);
  digitalWrite(10,LOW);
  delay(10);
  ref = analogRead(5);
  delay(10);
  Serial.println(log10(5.*R/(value*0.00489)-R)-log10(5.*R/(ref*0.00489)-R));
}
