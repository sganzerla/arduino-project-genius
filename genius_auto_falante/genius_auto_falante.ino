// DECLARAÇÃO DE CONSTANTES
int RODADA = 0;
int PASSO = 0;
bool GAME_OVER = false;

// DECLARAÇÃO  DE ARRAYS
int SEQUENCIA[32] = {};
int BOTOES[4] = {8, 9, 10, 11};
int LEDS[4] = {2, 3, 4, 5};
int NOTAS_MUSICAIS[4] = {262, 294, 330, 349};


void setup() {
  // LEDS
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  // Buzzer
//   pinMode(7, OUTPUT);
  // Botões
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
  pinMode(10, INPUT_PULLUP);
  pinMode(11, INPUT_PULLUP);
  randomSeed(analogRead(A0));

  Serial.begin(9600);

}

void loop() {
  proximaRODADA();
  reproduzirSequencia();
  aguardarJogador();
  // estrutura usada para reiniciar todas as variáveis (novo jogo)
  if (GAME_OVER == true) {
    SEQUENCIA[32] = {};
    RODADA = 0;
    PASSO = 0;
    GAME_OVER = false;
  }
  delay(1000);
}

/************************* Funções **************************/

void proximaRODADA() {
  int sorteio = random(4);
  SEQUENCIA[RODADA] = sorteio;
  RODADA = RODADA + 1;
  Serial.println("Sorteio: "+ sorteio);
}

void reproduzirSequencia() {
  for (int i = 0; i < RODADA; i++) {
   //  tone(7, NOTAS_MUSICAIS[SEQUENCIA[i]]);
    digitalWrite(LEDS[SEQUENCIA[i]], HIGH);
    delay(500);
   //  noTone(7);
    digitalWrite(LEDS[SEQUENCIA[i]], LOW);
    delay(500); // 100
  }
}

void aguardarJogador() {
  int botao_pressionado = 0;
  for (int i = 0; i < RODADA; i++) {
    bool jogada_efetuada = false;
    while (!jogada_efetuada) {
      for (int i = 0; i <= 3; i++) {
        if (digitalRead(BOTOES[i]) == HIGH) {
          botao_pressionado = i;
        //  tone(7, NOTAS_MUSICAIS[i]);
          digitalWrite(LEDS[i], HIGH);
          delay(300);
          digitalWrite(LEDS[i], LOW);
         // noTone(7);
          jogada_efetuada = true;
        }
      }
    }
    //verificar a jogada
    if (SEQUENCIA[PASSO] != botao_pressionado) {
      //efeito luminoso/sonoro indicando que o jogador perdeu
      for (int i = 0; i <= 3; i++) {
       // tone (7, 70);
        digitalWrite(LEDS[i], HIGH);
        delay(500); // 100
        digitalWrite(LEDS[i], LOW);
    //  noTone(7);
      }
      GAME_OVER = true;
      break;
    }
    PASSO = PASSO + 1;
  }
  PASSO = 0;
}
