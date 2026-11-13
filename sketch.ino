int ldrPin = 34;
int ledPin = 25;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(115200);
}

void loop() {

  int ldrValue = analogRead(ldrPin);

  Serial.print("LDR: ");
  Serial.println(ldrValue);

  if (ldrValue < 2000) {
    digitalWrite(ledPin, HIGH);
  } 
  else {
    digitalWrite(ledPin, LOW);
  }

  delay(200);
}