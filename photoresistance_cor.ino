int pinPhoto = 3; 
int n; 
float R2 = 1000.;
float U0 = 5.;

void setup(){
  Serial.begin(115200);
}

void loop(void) {
  n = analogRead(pinPhoto);
  Serial.println(R2*((U0 / (0.00489*n)) - 1.)); //Calcul de R1
  delay(500);  //Attente de 500ms donc environ 2 mesures par seconde
}
