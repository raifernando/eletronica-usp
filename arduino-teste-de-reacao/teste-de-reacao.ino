int leds[10][7] = {{1,1,1,0,1,1,1}, {0,0,1,0,0,0,1}, {1,1,0,1,0,1,1}, {0,1,1,1,0,1,1}, {0,0,1,1,1,0,1}, {0,1,1,1,1,1,0}, {1,1,1,1,1,1,0}, {0,0,1,0,0,1,1}, {1,1,1,1,1,1,1}, {0,1,1,1,1,1,1}};
int melhor_tempo = 999;
void display_numero(int n, int display_id){
  for (int j = 0; j <= 6; j++){
    digitalWrite(j + 7 * display_id, leds[n][j] == 0 ? LOW : HIGH);
  }
}

void zerar(){
  display_numero(0, 1);
  display_numero(0, 0);
  digitalWrite(A1, HIGH);
  digitalWrite(A0, LOW);
}

void desligar_displays(){
  for (int i =0; i <= 13; i++){
    digitalWrite(i, LOW);
  }
  digitalWrite(A4, LOW);
  digitalWrite(A1, LOW);
  digitalWrite(A0, LOW);
}

void piscar(int n){
  for (int i = 0; i < 3; i++){    
    delay(500);
    desligar_displays();
    delay(500);
    display_numero(n / 100 % 10, 1);
    display_numero(n / 10 % 10, 0);
    digitalWrite(A4, HIGH);
    digitalWrite(A1, HIGH);
    digitalWrite(A0, LOW);
  }
}

void display_tempo(int tempo){
  if ( tempo >= 1000){
    display_numero(9, 1);
    display_numero(9, 0);
    digitalWrite(A1, LOW);
    digitalWrite(A0, HIGH);
    }
  else{
    display_numero(tempo / 100 % 10, 1);
    display_numero(tempo/ 10 % 10, 0);
    digitalWrite(A1, HIGH);
    digitalWrite(A0, LOW);
  }
  
}

void setup() {
  // put your setup code here, to run once:
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A3, OUTPUT);
  pinMode(A4, OUTPUT);
  pinMode(A5, INPUT);
  for (int i = 0; i <=13; i++){
    pinMode(i, OUTPUT);
  }
  digitalWrite(A4, HIGH);
  zerar();
  digitalWrite(A3, LOW);
   
}


 
void loop() {
  // put your main code here, to run repeatedly:
  int tempo;
  while (digitalRead(A5) == LOW) continue;
  zerar();
  int tempo_delay = random(2000, 5000);
  delay(tempo_delay);
  unsigned long inicio = millis();
  digitalWrite(A3, HIGH);
  while (digitalRead(A5) == LOW){
    unsigned long atual = millis();
    tempo = atual - inicio;
    display_tempo(tempo);
  }
  digitalWrite(A3, LOW);
  
  if (tempo < melhor_tempo){
    piscar(tempo);
    melhor_tempo = tempo;
  }
  
  delay(1000);
 
}