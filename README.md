# Système d'irrigation automatique

Projet de licence (USTHB) : arroser au bon moment et garder la réserve d'eau pleine.

Deux montages indépendants :

1. **Arrosage** (ce dossier) : un Arduino Uno lit un capteur d'humidité du sol et un
   capteur de pluie. La pompe, commandée par un relais, ne démarre que si le sol est
   sec et qu'il ne pleut pas.
2. **Niveau d'eau** : remplissage du réservoir par un circuit à NE555 et deux sondes,
   sans microcontrôleur (donc pas de code ici).

## Contenu

- `irrigation.ino` : programme du circuit d'arrosage (Arduino IDE).

## Câblage

| Broche | Rôle                         |
|--------|------------------------------|
| 3      | Relais (pompe)               |
| 6      | Capteur d'humidité du sol    |
| 7      | LED témoin du capteur de sol |
| 8      | LED témoin du capteur de pluie |
| 9      | Capteur de pluie             |

Détails, schémas (Fritzing), simulations (Proteus) et photos : voir la page du projet
sur mon portfolio.

© Sara Messaoudi. Code présenté à titre de démonstration de mon travail.
