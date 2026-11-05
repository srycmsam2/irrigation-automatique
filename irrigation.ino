// Irrigation automatique : la pompe ne tourne que si le sol est sec ET s'il ne pleut pas.
// Carte : Arduino Uno (ATmega328P)

const int RELAIS_POMPE = 3;   // sortie vers la carte relais (commande de la pompe)
const int CAPTEUR_SOL  = 6;   // entrée : capteur d'humidité du sol (sortie numérique)
const int LED_SOL      = 7;   // LED témoin du capteur de sol
const int LED_PLUIE    = 8;   // LED témoin du capteur de pluie
const int CAPTEUR_PLUIE = 9;  // entrée : capteur de pluie (sortie numérique)

void setup() {
  pinMode(RELAIS_POMPE, OUTPUT);
  pinMode(CAPTEUR_SOL, INPUT);
  pinMode(LED_SOL, OUTPUT);
  pinMode(LED_PLUIE, OUTPUT);
  pinMode(CAPTEUR_PLUIE, INPUT);
}

void loop() {
  int sol   = digitalRead(CAPTEUR_SOL);
  int pluie = digitalRead(CAPTEUR_PLUIE);

  // Sol sec (1) et pas de pluie (1) : le relais est activé, la pompe arrose
  if (sol == HIGH && pluie == HIGH) {
    digitalWrite(RELAIS_POMPE, HIGH);
  } else {
    digitalWrite(RELAIS_POMPE, LOW);   // relais au repos : la pompe s'arrête
  }

  digitalWrite(LED_SOL, !sol);
  digitalWrite(LED_PLUIE, pluie);
}
