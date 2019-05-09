int Apin = 5;
int Avalue;

void setup(void) {
  Serial.begin(115200);
}

void loop(void) {  
    Avalue = analogRead(Apin);
    Serial.println(Avalue*0.00489);
}
