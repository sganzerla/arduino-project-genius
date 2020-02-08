


void setup() {
  // Serial.begin(9600);
  pinMode(10, OUTPUT);
}

void loop() {
  digitalWrite(10, HIGH);
  delay(1000);
  digitalWrite(10, LOW);
  
  delay(500);
}
