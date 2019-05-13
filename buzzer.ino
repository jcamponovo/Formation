int demiPeriodemicros = 500;

void setup() {
  pinMode(3,OUTPUT);
}

void loop() {
  digitalWrite(3,HIGH);
  delayMicroseconds(demiPeriodemicros);
  digitalWrite(3,LOW);
  delayMicroseconds(demiPeriodemicros);
}
