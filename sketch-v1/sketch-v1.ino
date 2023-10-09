// Define the LED pins
const int ledPins[] = {2, 3, 4, 5, 6, 7, 8,9};

// Set up the LED pins as outputs
void setup() {
  for (int i = 0; i < 8; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

// Loop forever
void loop() {
  // Turn on the first LED after a delay of 7 seconds
  delay(7000);
  digitalWrite(ledPins[0], HIGH);

  // Turn on the other LEDs one after the other with a 1 second delay
  for (int i = 1; i < 8; i++) {
    
    delay(1000);
    digitalWrite(ledPins[i], HIGH);
  }

  // Turn off all the LEDs
  /*for (int i = 0; i < 7; i++) {
    digitalWrite(ledPins[i], LOW);
  }*/
}