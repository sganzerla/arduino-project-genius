#define LED_BRANCO 8
#define LED_AMARELO 9
#define LED_LARANJA 10
#define LED_AZUL 11

#define B_BRANCO 2
#define B_AMARELO 3
#define B_LARANJA 4
#define B_AZUL 5

#define TIMER_500
#define TIMER_1000

bool user_error_or_complete_sequence_round = false;

int array_buttons[] = {B_BRANCO, B_AMARELO, B_LARANJA, B_AZUL};
int array_leds[] = {LED_BRANCO, LED_AMARELO, LED_LARANJA, LED_AZUL};
int array_leds_sort[100] = {};
int rounds = 0;

void setup()
{
  Serial.begin(9600);
  startPort();
  randomSeed(analogRead(0));
}

void loop()
{
  newRound();
  playRound();
  Serial.print("Aguardando resposta do jogador para a sequência da rodada: ");
  Serial.println(rounds);

  do
  {
    for (int i = 0; i < 4; i++)
    {
      Serial.print("Button: ");
      Serial.println(array_buttons[i]);
      Serial.print(" -> ");
      Serial.println(digitalRead(array_buttons[i]));

      if (digitalRead(array_buttons[i]))
      {
        Serial.print("Botão pressionado:");
        Serial.println(array_buttons[i]);
        array_buttons[i] = LOW;
      }
      if (i == 3)
      {
        i = 0;
      }
    }

  } while (!user_error_or_complete_sequence_round);
  Serial.println("Nova rodada.");
  delay(2000);
}

void playRound()
{
  Serial.println();
  Serial.print("Round: ");
  Serial.println(rounds);
  Serial.print("Portas sorteadas: ");

  for (int i = 0; i < rounds; i++)
  {
    Serial.print(" ");
    Serial.print(array_leds[array_leds_sort[i]]);
    Serial.print(" ");
    setOnLed(array_leds[array_leds_sort[i]]);
    if (i == rounds - 1)
    {
      Serial.println("");
      Serial.println("Rodada Encerrada");
      Serial.println("");
    }
  }

  delay(2000);
}

void newRound()
{
  array_leds_sort[rounds] = random(4);
  rounds++;
}

void setOnLed(int port)
{
  digitalWrite(port, HIGH);
  delay(1200);
  digitalWrite(port, LOW);
  delay(500);
}

void startPort()
{
  pinMode(LED_BRANCO, OUTPUT);
  pinMode(LED_AMARELO, OUTPUT);
  pinMode(LED_LARANJA, OUTPUT);
  pinMode(LED_AZUL, OUTPUT);

  pinMode(B_BRANCO, INPUT_PULLUP);
  pinMode(B_AMARELO, INPUT_PULLUP);
  pinMode(B_LARANJA, INPUT_PULLUP);
  pinMode(B_AZUL, INPUT_PULLUP);
}
