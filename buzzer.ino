int demiPeriodemicros = 500;

void setup() {
  pinMode(2,OUTPUT);
}

void loop() {
  digitalWrite(2,HIGH);
  delayMicroseconds(demiPeriodemicros);
  digitalWrite(2,LOW);
  delayMicroseconds(demiPeriodemicros);
}
