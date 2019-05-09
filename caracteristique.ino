// Ceci est un commentaire. Il ne sera pas executé comme une instruction mais permet d'expliquer ce que fait une partie du code

// Declaration et initialisation des variables pinU2 et pinU3 de type entier
int pinU3 = 4; 
int pinU2 = 5; 

// Declaration des variables n2 et n3 de type entier
int n3;
int n2; 

// Toutes les lignes entre les accolades sont executées une fois au demarrage du programme
void setup(void) { 
  Serial.begin(115200);
}

// Toutes les lignes entre accolades sont executees en boucle tant que la carte est alimentée (démarre après le setup)
void loop(void) {
  // Lecture du pin analogique A5 ici car pinU2 a une valeur de 5 et stockage de la valeur obtenue dans la variable n2
  n2 = analogRead(pinU2);
  // Lecture du pin analogique A4 ici car pinU3 a une valeur de 4 et stockage de la valeur obtenue dans la variable n3
  n3 = analogRead(pinU3);

  // Affichage des deux valeurs sur une même ligne
  Serial.print(n2);
  Serial.print(";");
  Serial.println(n3);
  
  //delai de 50ms donc il y aura une mesure à environ 20 Hz
  delay(50);
}
