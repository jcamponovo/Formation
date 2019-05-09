// Ceci est un commentaire. Il ne sera pas executé comme une instruction mais permet d'expliquer ce que fait une partie du code

// Declaration et initialisation de la variable pinPhoto de type entier. C'est le numéro du port analogique que l'on va lire (ici A3)
int pinPhoto = 3; 

// Declaration de la variable n de type entier
int n; 


// Toutes les lignes entre les accolades sont executées une fois au demarrage du programme
void setup(void) { 
  Serial.begin(115200);
}



// Toutes les lignes entre accolades sont executees en boucle tant que la carte est alimentée (démarre après le setup)
void loop(void) {
  n = analogRead(pinPhoto); //mesure de la tension U2
  Serial.println(0.00489*n); //calcul de la valeur de U2 et affichage du résultat
  
  //delai de 50ms donc il y aura une mesure à environ 20 Hz
  delay(50);
  
}
