/* By BUBA 
        __
    ___( o)>
    \ <_. )
    `---' 
*/

// Definizione dei pin per i LED del primo semaforo
int LedRosso_1 = 6;    
int LedGiallo_1 = 5;   
int LedVerde_1 = 4;   

// Definizione dei pin per i LED del secondo semaforo
int LedRosso_2 = 3;    
int LedGiallo_2 = 2;   
int LedVerde_2 = 1;    

void setup() 
{
  // Imposta i pin dei LED come uscite
  pinMode(LedRosso_1, OUTPUT);   
  pinMode(LedGiallo_1, OUTPUT);   
  pinMode(LedVerde_1, OUTPUT);   
  
  pinMode(LedRosso_2, OUTPUT);   
  pinMode(LedGiallo_2, OUTPUT);  
  pinMode(LedVerde_2, OUTPUT);    
}

void loop() 
{
  // accende il LED Rosso 1 e il LED Verde 2
  digitalWrite(LedRosso_1, HIGH);  // accende il LED Rosso 1
  digitalWrite(LedVerde_2, HIGH);  // accende il LED Verde 2
  delay(2000);                     // accende 2 secondi
  
  // Spegne il LED Rosso 2 e accende il LED Verde 2
  digitalWrite(LedRosso_2, LOW);   // spegne LED Rosso 2
  digitalWrite(LedVerde_2, HIGH);  // mantiene acceso il LED Verde 2
  delay(3000);                     // aspetta 3 secondi
  
  // accende il LED Giallo 2
  digitalWrite(LedGiallo_2, HIGH); // accende il LED Giallo 2
  delay(2000);                     // aspetta 2 secondi
  
  // spegne i LED Verde e Giallo 2 e accende il LED Rosso 2
  digitalWrite(LedVerde_2, LOW);   // spegne il LED Verde 2
  digitalWrite(LedGiallo_2, LOW);  // spegne il LED Giallo 2
  digitalWrite(LedRosso_2, HIGH);  // accende il LED Rosso 2
  delay(2000);                     // aspetta 2 secondi
  
  // spegne il LED Rosso 1 e accende il LED Verde 1
  digitalWrite(LedRosso_1, LOW);   // spegne il LED Rosso 1
  digitalWrite(LedVerde_1, HIGH);  // accende LED Verde 1
  delay(3000);                     // aspetta 3 secondi
  
  // accende il LED Giallo 1
  digitalWrite(LedGiallo_1, HIGH); // accende il  LED Giallo 1
  delay(2000);                     // aspetta 2 secondi
  
  // spegne i LED Verde e Giallo 1
  digitalWrite(LedVerde_1, LOW);   // spegne il LED Verde 1
  digitalWrite(LedGiallo_1, LOW);  // spegne il LED Giallo 1
}
