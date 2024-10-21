/* By BUBA 
        __
    ___( o)>
    \ <_. )
    `---' 
*/
//Definizione dei pin per i LED del primo semaforo
int LedRosso_1 = 13;    // Semaforo 1 - LED rosso
int LedGiallo_1 = 12;   // Semaforo 1 - LED giallo
int LedVerde_1 = 11;    // Semaforo 1 - LED verde

// Definizione dei pin per i LED del secondo semaforo
int LedRosso_2 = 7;    // Semaforo 2 - LED rosso
int LedGiallo_2 = 6;   // Semaforo 2 - LED giallo
int LedVerde_2 = 5;    // Semaforo 2 - LED verde

void setup() 
{
  // Imposta i pin associati ai LED come uscite per poterli accendere o spegnere
  pinMode(LedRosso_1, OUTPUT);   
  pinMode(LedGiallo_1, OUTPUT);  
  pinMode(LedVerde_1, OUTPUT);   
  
  pinMode(LedRosso_2, OUTPUT);   
  pinMode(LedGiallo_2, OUTPUT);  
  pinMode(LedVerde_2, OUTPUT);   
}

void loop() 
{
  digitalWrite(LedRosso_1, HIGH);  // accende rosso - Semaforo 1
  digitalWrite(LedVerde_2, HIGH);  // accende verde - Semaforo 2
  delay(4000);                     // aspetta 4 secondi
  
  digitalWrite(LedGiallo_2, HIGH); // accende giallo - Semaforo 2
  delay(2000);                     // aspetta 2 secondi
  
  digitalWrite(LedVerde_2, LOW);   // spegne verde - Semaforo 2
  digitalWrite(LedGiallo_2, LOW);  // spegne giallo - Semaforo 2
  digitalWrite(LedRosso_1, LOW);   // spegne rosso - Semaforo 1
  
  digitalWrite(LedRosso_2, HIGH);  // accende rosso - Semaforo 2
  digitalWrite(LedVerde_1, HIGH);  // accende verde - Semaforo 1
  delay(4000);                     // aspetta 4 secondi
  
  digitalWrite(LedGiallo_1, HIGH); // accende giallo - Semaforo 1
  delay(2000);                     // Attesa 2 secondi
  
  digitalWrite(LedGiallo_1, LOW);  // spegne giallo - Semaforo 1
  digitalWrite(LedVerde_1, LOW);   // spegne verde - Semaforo 1
  digitalWrite(LedRosso_2, LOW);   // spegne rosso - Semaforo 2
}
