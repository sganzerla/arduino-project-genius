#define LED_VERMELHO 4
#define BOTAO_VERMELHO 10

void setup()
{
  Serial.begin(9600);
  pinMode(BOTAO_VERMELHO, OUTPUT);
  pinMode(BOTAO_VERMELHO, INPUT_PULLUP);
}

void loop()
{
  int estadoBotao = digitalRead(BOTAO_VERMELHO);
  Serial.println(estadoBotao);
  delay(500);
}
