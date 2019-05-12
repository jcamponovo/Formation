int pinPhoto = 5; 
int n; 
float R2 = 1000.;
float U0 = 5.;
int nb = 1000;
bool mes = true;
double t;

void setup(){
  Serial.begin(115200);
  Serial.print("[");
}

void loop(void) {
  if (mes){
    t = micros();
    while((micros()-t)<500000){}
    t = micros();
    for (int i=1;i<nb;i++){
  
    n = analogRead(pinPhoto);
  Serial.print("[");
  Serial.print(micros()-t);
  Serial.print(",");
  Serial.print(n); //Calcul de R1
  Serial.print("]");
  Serial.print(",");  //Attente de 500ms donc environ 2 mesures par seconde
  }
  n = analogRead(pinPhoto);
  Serial.print("[");
  Serial.print(micros()-t);
  Serial.print(",");
  Serial.print(n); //Calcul de R1
  Serial.println("]]");
  mes=false;
  }
}
