
// Button handling
int switchState = 0;
int GREEN_L = 3;
int RED_L = 6;
int YELLOW_L = 5;
int BLUE_L = 4;

// Set States
void blinky(int green_state, int red_state, int blue_state, int yellow_state, int delay_ms) {
    digitalWrite(GREEN_L, green_state);
    digitalWrite(RED_L, red_state);
    digitalWrite(BLUE_L, blue_state);
    digitalWrite(YELLOW_L, yellow_state);
    delay(delay_ms);
  }

void setup() {
  pinMode(GREEN_L, OUTPUT);
  pinMode(RED_L, OUTPUT);
  pinMode(BLUE_L, OUTPUT);
  pinMode(YELLOW_L, OUTPUT);
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
    digitalWrite(6, LOW);
  } else {
    blinky(HIGH, LOW, LOW, LOW, 1000);
    blinky(LOW, LOW, LOW, HIGH, 250);
    blinky(LOW, HIGH, LOW, LOW, 500);
    blinky(LOW, HIGH, LOW, HIGH, 250);
    blinky(HIGH, LOW, LOW, LOW, 1000);
    
    //blinky(LOW, LOW, HIGH, LOW, 250);
    
  }
}
