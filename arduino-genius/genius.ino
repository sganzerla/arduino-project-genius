
#define LED_VERDE 2
#define LED_AMARELO 3
#define LED_VERMELHO 4
#define LED_AZUL 5

#define UM_SEGUNDO 1000
#define MEIO_SEGUNDO 500

#define TAMANHO_SEQUENCIA 4

int sequenciaLuzes[TAMANHO_SEQUENCIA];

void setup()
{
    Serial.begin(9600);
    iniciaPortas();
    iniciaJogo();
}

void iniciaJogo()
{
    sequenciaLuzes[0] = LED_AZUL;
    sequenciaLuzes[1] = LED_VERDE;
    sequenciaLuzes[2] = LED_VERMELHO;
    sequenciaLuzes[3] = LED_AMARELO;
}

void iniciaPortas()
{
    pinMode(LED_VERDE, OUTPUT);
    pinMode(LED_AMARELO, OUTPUT);
    pinMode(LED_VERMELHO, OUTPUT);
    pinMode(LED_AZUL, OUTPUT);
}

void loop()
{
    for (int indice = 0; indice < TAMANHO_SEQUENCIA; indice++)
    {
        piscaLed(sequenciaLuzes[indice]);
    }
}

void piscaSequencia1()
{
    piscaLed(LED_VERMELHO);
    piscaLed(LED_AMARELO);
    piscaLed(LED_VERDE);
    piscaLed(LED_AZUL);
    delay(MEIO_SEGUNDO);
}

void piscaLedSequencia2()
{
    digitalWrite(LED_VERDE, HIGH);
    digitalWrite(LED_AMARELO, HIGH);
    digitalWrite(LED_VERMELHO, HIGH);
    digitalWrite(LED_AZUL, HIGH);
    delay(UM_SEGUNDO);
    digitalWrite(LED_VERDE, LOW);
    digitalWrite(LED_AMARELO, LOW);
    digitalWrite(LED_VERMELHO, LOW);
    digitalWrite(LED_AZUL, LOW);
    delay(MEIO_SEGUNDO);
}

piscaLed(int portaLed)
{
    digitalWrite(portaLed, HIGH);
    delay(UM_SEGUNDO);
    digitalWrite(portaLed, LOW);
    delay(MEIO_SEGUNDO);
}
