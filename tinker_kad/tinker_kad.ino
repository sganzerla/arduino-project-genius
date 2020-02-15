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


int array_leds[] = { LED_BRANCO, LED_AMARELO, LED_LARANJA, LED_AZUL };
int array_leds_sort[100] = {};
int rand_number;
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
  
}

void playRound(){
  Serial.println();
  Serial.print("Round: ");  
  Serial.println(rounds);

  for (int i = 0; i < rounds; i++)
  {
    Serial.print(" ");
    Serial.print(array_leds[array_leds_sort[i]]);
    Serial.print(" ");
    setOnLed(array_leds[array_leds_sort[i]]);
  } 
  delay(2000);
}

void newRound()
{  
  	rounds = rounds + 1;
  	rand_number = random(4);
	array_leds_sort[rounds] = rand_number;
    Serial.println();
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
