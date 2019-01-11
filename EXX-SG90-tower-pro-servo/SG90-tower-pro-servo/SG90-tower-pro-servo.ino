/*
 * Bas on Tech - SG90 Tower Pro servo aansturen
 * Deze les is onderdeel van de lessen op https://arduino-lessen.nl
 *  
 * (c) Copyright 2018 - Bas van Dijk / Bas on Tech
 * Deze code en inhoud van de lessen mag zonder schriftelijke toestemming 
 * niet voor commerciele doeleinden worden gebruikt
 * 
 * YouTube:    https://www.youtube.com/c/BasOnTechNL
 * Facebook:   https://www.facebook.com/BasOnTechChannel
 * Instagram:  https://www.instagram.com/BasOnTech
 * Twitter:    https://twitter.com/BasOnTech
 * 
 * Servo specificaties https://servodatabase.com/servo/towerpro/sg90
 * 
 * Bruin  -> GND
 * Rood   -> 5V
 * Oranje -> A8
 * 
 */

#include <Servo.h>    // Importeer de Servo bibliotheek om de servo aan te sturen

Servo servo;          // Maak een servo object om de servo aan te sturen

int pos = 10;          // variabele voor de positie van de servo

void setup() {
  servo.attach(8);    // Vertel het servo object dat de servo op pin 8 is aangesloten
  servo.write(10);
  delay(40);  
}

void loop() {
  
  // Laat de pos variabele van 0 tot 180 lopen
  for (pos = 10; pos <= 170; pos++) {
    servo.write(pos);  // Geef de positie aan de servo door
    delay(10);         // Geef de servo 10ms om naar de positie te draaien
  }

  // Laat de pos variabele van 180 tot 0 lopen
  for (pos = 170; pos >= 10; pos--) {
    servo.write(pos);  // Geef de positie aan de servo door
    delay(10);         // Geef de servo 10ms om naar de positie te draaien
  }
 
}
