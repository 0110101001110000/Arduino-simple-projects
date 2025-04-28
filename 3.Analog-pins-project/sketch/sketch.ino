

// Init -------------------------------------------------------------------- //


// Constants
#define bluePin       6
#define yellowPin     5
#define redPin        3
#define smoothlyDelay 5
#define pauseDelay    500


// Initial setup

void setup() {
  Serial.begin(9600);
  pinMode(bluePin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(redPin, OUTPUT);
}


// Main loop

void loop() {
  onLedSmoothly(bluePin, smoothlyDelay);
  onLedSmoothly(yellowPin, smoothlyDelay);
  onLedSmoothly(redPin, smoothlyDelay);

  delay(pauseDelay);

  offLedSmoothly(bluePin, smoothlyDelay);
  offLedSmoothly(yellowPin, smoothlyDelay);
  offLedSmoothly(redPin, smoothlyDelay);

  delay(pauseDelay);

  onLedSmoothly(redPin, smoothlyDelay);
  onLedSmoothly(yellowPin, smoothlyDelay);
  onLedSmoothly(bluePin, smoothlyDelay);

  delay(pauseDelay);

  offLedSmoothly(redPin, smoothlyDelay);
  offLedSmoothly(yellowPin, smoothlyDelay);
  offLedSmoothly(bluePin, smoothlyDelay);

  delay(pauseDelay);
}


// Functions

void onLedSmoothly(int pin, int delay_in_millis) {
  for (int i = 0; i<=255; i++) {
      analogWrite(pin, i);
      delay(delay_in_millis);
  }
}

void offLedSmoothly(int pin, int delay_in_millis) {
  for (int i = 255; i >= 0; i--) {
      analogWrite(pin, i);
      delay(delay_in_millis);
  }
}
