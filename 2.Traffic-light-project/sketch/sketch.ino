

// Init -------------------------------------------------------------------- //


// Constants
#define bluePin     4
#define yellowPin   3
#define redPin      2
#define shortDelay  100
#define normalDelay 2500
#define longDelay   8500


// Initial setup

void setup() {
  pinMode(bluePin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(redPin, OUTPUT);
}


// Main loop

void loop() {

  // Open
  digitalWrite(bluePin, 1);
  delay(longDelay);
  digitalWrite(bluePin, 0);
  delay(shortDelay);

  // Warning
  digitalWrite(yellowPin, 1);
  delay(normalDelay);
  digitalWrite(yellowPin, 0);
  delay(shortDelay);

  // Close
  digitalWrite(redPin, 1);
  delay(longDelay);
  digitalWrite(redPin, 0);
  delay(shortDelay);
}
