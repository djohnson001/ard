#define D0 16
#define D1 5
#define D2 4
#define D3 0
#define D4 2
#define D5 14
#define D6 12
#define D7 13
#define D8 15
#define D9 3
#define D10 1

int pins[] = { D0, D1, D2, D3, D4, D5, D6, D7, D8, D9, D10 };
int totalPins = 11;

void setup() {
  for(int i = 0; i < totalPins; i++) {
    pinMode(pins[i], OUTPUT);
  }
}

void loop() {
  long timeAlive = millis();
  int currentPin = (timeAlive / 100) % totalPins;

  for(int i = 0; i < totalPins; i++){
    digitalWrite(pins[i], i == currentPin ? HIGH : LOW);
  }
}
