int pinPhoto = 3; 
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
    for (int i=1;i<nb;i++){ //n-1 mesures
  
    n = analogRead(pinPhoto);
  Serial.print("[");
  Serial.print(micros()-t); //Valeur du temps depuis le début en µs
  Serial.print(",");
  Serial.print(n); //Valeur analogique mesurée
  Serial.print("]");
  Serial.print(","); 
  }
  //Dernière mesure -on termine par un crochet fermant-
  n = analogRead(pinPhoto);
  Serial.print("[");
  Serial.print(micros()-t);
  Serial.print(",");
  Serial.print(n);
  Serial.println("]]");
  mes=false;
  }
}
