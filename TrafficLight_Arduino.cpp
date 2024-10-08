// By BUBA :) //

// Definizione dei pin collegati ai LED
int PinRed = 4;     // Pin del LED rosso
int PinYellow = 5;  // Pin del LED giallo
int PinGreen = 6;   // Pin del LED verde

void setup() 
{
  // Configura i pin dei LED come uscite
  pinMode(PinRed, OUTPUT);     
  pinMode(PinYellow, OUTPUT);  
  pinMode(PinGreen, OUTPUT);   
}

void loop() 
{
  RedLight();    // Accende il LED rosso
  YellowLight(); // Accende il LED giallo
  GreenLight();  // Accende il LED verde
}

// Funzione per il LED rosso
void RedLight()
{
  digitalWrite(PinRed, HIGH);  // Accende il LED rosso
  delay(10000);                // Aspetta 10 secondi 
  digitalWrite(PinRed, LOW);   // Spegne il LED rosso
}

// Funzione per il LED giallo
void YellowLight()
{
  digitalWrite(PinYellow, HIGH); // Accende il LED giallo
  delay(5000);                   // Aspetta 5 secondi 
  digitalWrite(PinYellow, LOW);  // Spegne il LED giallo
}

// Funzione per il LED verde
void GreenLight()
{
  digitalWrite(PinGreen, HIGH);  // Accende il LED verde
  delay(10000);                  // Aspetta 10 secondi 
  digitalWrite(PinGreen, LOW);   // Spegne il LED verde
}
