SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

int lowest = 4095;
int highest = 0;

void setup() {
  pinMode(D5, OUTPUT);
  pinMode(D7, INPUT);
}

void loop() {
  lowest = min(lowest, analogRead(A0));
  highest = max(highest, analogRead(A0));
  analogWrite(D5, map(analogRead(A0), lowest, highest, 0, 255));
}