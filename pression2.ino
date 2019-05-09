int Apin = 5;
int Avalue;
double P;
int A0 = 37;

void setup(void) {
  Serial.begin(115200);
}

void loop(void) {
  P=0.;
  for (int i=0;i<1024;i++){
    Avalue = analogRead(Ppin);
    P = P + (0.00489*(Avalue - A0)*500000./4.5)/1024.;
    delayMicroseconds(500);
  }
  Serial.println(P);
}
