int ldrPin = A0;
int leds[] = {A1, A2, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
int numLeds = 14;

void setup() {
  for (int i = 0; i < numLeds; i++) {
    pinMode(leds[i], OUTPUT);
  }
  Serial.begin(9600);
}

void loop() {
  int valorLDR = analogRead(ldrPin);
  Serial.println(valorLDR);

  if (valorLDR < 150) digitalWrite(leds[0], HIGH); else digitalWrite(leds[0], LOW);
  if (valorLDR < 250) digitalWrite(leds[1], HIGH); else digitalWrite(leds[1], LOW);
  if (valorLDR < 350) digitalWrite(leds[2], HIGH); else digitalWrite(leds[2], LOW);
  if (valorLDR < 450) digitalWrite(leds[3], HIGH); else digitalWrite(leds[3], LOW);
  if (valorLDR < 550) digitalWrite(leds[4], HIGH); else digitalWrite(leds[4], LOW);
  if (valorLDR < 600) digitalWrite(leds[5], HIGH); else digitalWrite(leds[5], LOW);
  if (valorLDR < 650) digitalWrite(leds[6], HIGH); else digitalWrite(leds[6], LOW);
  if (valorLDR < 700) digitalWrite(leds[7], HIGH); else digitalWrite(leds[7], LOW);
  if (valorLDR < 750) digitalWrite(leds[8], HIGH); else digitalWrite(leds[8], LOW);
  if (valorLDR < 800) digitalWrite(leds[9], HIGH); else digitalWrite(leds[9], LOW);
  if (valorLDR < 850) digitalWrite(leds[10], HIGH); else digitalWrite(leds[10], LOW);
  if (valorLDR < 900) digitalWrite(leds[11], HIGH); else digitalWrite(leds[11], LOW);
  if (valorLDR < 950) digitalWrite(leds[12], HIGH); else digitalWrite(leds[12], LOW);
  if (valorLDR < 1000) digitalWrite(leds[13], HIGH); else digitalWrite(leds[13], LOW);
  
  delay(200);
}
