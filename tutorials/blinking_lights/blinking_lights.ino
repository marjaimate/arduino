
// Button handling
int switchState = 0;
int GREEN_L = 3;
int RED_L = 4;
int BLUE_L = 5;

// Set States
void blinky(int green_state, int red_state, int blue_state, int delay_ms) {
    digitalWrite(GREEN_L, green_state);
    digitalWrite(RED_L, red_state);
    digitalWrite(BLUE_L, blue_state);
    delay(delay_ms);
  }

void setup() {
  pinMode(GREEN_L, OUTPUT);
  pinMode(RED_L, OUTPUT);
  pinMode(BLUE_L, OUTPUT);
  pinMode(2, INPUT);
}

void loop() {
  // Read the button state
  switchState = digitalRead(2);

  if (switchState == LOW) {
    // button not pressed
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
  } else {
    blinky(HIGH, LOW, LOW, 10);
    blinky(LOW, HIGH, LOW, 10);
    blinky(LOW, LOW, HIGH, 10);
    blinky(LOW, HIGH, LOW, 10);
    blinky(HIGH, LOW, LOW, 10);
  }
}
