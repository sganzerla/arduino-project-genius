// porta onde está conectado o led
int ledBranco = 2;

void setup()
{
    // pino 2
    pinMode(ledBranco, OUTPUT);
}

void loop()
{
    // liga luz
    digitalWrite(ledBranco, HIGH);

    delay(1000);

    // desliga luz
    digitalWrite(ledBranco, LOW);

    delay(1000);
}
