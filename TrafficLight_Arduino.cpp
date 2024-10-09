// Definizione dei pin collegati ai LED del primo semaforo
const int PinRed_1 = 6;     
const int PinYellow_1 = 5;  
const int PinGreen_1 = 4;   

// Definizione dei pin collegati ai LED del secondo semaforo
const int PinRed_2 = 3;     
const int PinYellow_2 = 2;  
const int PinGreen_2 = 1;  


int state_1 = 0;  
int state_2 = 0;  

void setup() 
{
  // Configura tutti i pin dei semafori come uscite
  pinMode(PinRed_1, OUTPUT);     
  pinMode(PinYellow_1, OUTPUT);  
  pinMode(PinGreen_1, OUTPUT);   
  pinMode(PinRed_2, OUTPUT);     
  pinMode(PinYellow_2, OUTPUT);  
  pinMode(PinGreen_2, OUTPUT);   
  
}

void loop()
{
  // Aggiorna il primo semaforo
  updateSemaforo1();
  
  // Aggiorna il secondo semaforo
  updateSemaforo2();
}

// Funzione per il primo semaforo
void updateSemaforo1() 
{
  switch(state_1) 
  {
    case 0:  // Rosso
      digitalWrite(PinRed_1, HIGH);
      digitalWrite(PinYellow_1, LOW);
      digitalWrite(PinGreen_1, LOW);
      delay(2000);
      state_1 = 1;
      break;
    
    case 1:  // Giallo 
      digitalWrite(PinRed_1, LOW);
      digitalWrite(PinYellow_1, HIGH);
      digitalWrite(PinGreen_1, LOW);
      delay(2000);
      state_1 = 2;
      break;
    
    case 2:  // Verde
      digitalWrite(PinRed_1, LOW);
      digitalWrite(PinYellow_1, LOW);
      digitalWrite(PinGreen_1, HIGH);
      delay(2000);
      state_1 = 3;
      break;
    
    case 3:  // Giallo 
      digitalWrite(PinRed_1, LOW);
      digitalWrite(PinYellow_1, HIGH);
      digitalWrite(PinGreen_1, LOW);
      delay(2000);
      state_1 = 0;
      break;
  }
}

// Funzione per il secondo semaforo
void updateSemaforo2() 
{
  switch(state_2) 
  {
    case 0:  // Verde
      digitalWrite(PinRed_2, LOW);
      digitalWrite(PinYellow_2, LOW);
      digitalWrite(PinGreen_2, HIGH);
      delay(2000);
      state_2 = 1;
      break;
    
    case 1:  // Giallo 
      digitalWrite(PinRed_2, LOW);
      digitalWrite(PinYellow_2, HIGH);
      digitalWrite(PinGreen_2, LOW);
      delay(2000);
      state_2 = 2;
      break;
    
    case 2:  // Rosso
      digitalWrite(PinRed_2, HIGH);
      digitalWrite(PinYellow_2, LOW);
      digitalWrite(PinGreen_2, LOW);
      delay(2000);
      state_2 = 3;
      break;
    
    case 3:  // Giallo 
      digitalWrite(PinRed_2, LOW);
      digitalWrite(PinYellow_2, HIGH);
      digitalWrite(PinGreen_2, LOW);
      delay(2000);
      state_2 = 0;
      break;
  }
}
