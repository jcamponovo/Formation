int pinU3 = 4; 
int pinU2 = 5; 

int n3;
int n2; 

float R3 = 220.;

void setup(void) { 
  Serial.begin(115200);
}

void loop(void) {
  n2 = analogRead(pinU2);
  n3 = analogRead(pinU3);

  Serial.print(0.00489*(n2-n3)); //renvoie la valeur de U2 en V
  Serial.print(";");
  Serial.println((4.89*n3)/R3); //renvoie la valeur de I en mA
  
  //delai de 500ms donc il y aura deux mesures par seconde environ
  delay(500);
}
