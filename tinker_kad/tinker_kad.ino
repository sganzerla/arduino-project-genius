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

int ARRAY_LEDS[] = {LED_BRANCO, LED_AMARELO, LED_LARANJA, LED_AZUL};

void setup()
{
  startPort();
}

void loop()
{
  for (int i = 0; i < 4; i++)
  {
    setOnLed(ARRAY_LEDS[i]);
  }  
}

void setOnLed(int port)
{
   digitalWrite(port, HIGH);
   delay(1000); 
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
