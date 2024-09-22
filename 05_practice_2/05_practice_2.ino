#define PIN_LED 7
unsigned int count, toggle;

void setup() {
  pinMode(PIN_LED, OUTPUT);
  count = toggle = 0;
}

void loop() {
  digitalWrite(PIN_LED, toggle);
  delay(1000);

  while(count < 10) {
    toggle = toggle_state(toggle);
    digitalWrite(PIN_LED, toggle);
    delay(100);
    count++;
  }

  toggle = 1;
  digitalWrite(PIN_LED, toggle);
  
  while(1) {}
}

int toggle_state(int toggle) {
  return !toggle;
}
