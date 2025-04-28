

// Init -------------------------------------------------------------------- //


// Constants
#define bluePin   4
#define yellowPin 3
#define redPin    2


// Initial Setup 

void setup() {
  pinMode(bluePin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(redPin, OUTPUT);
}


// Main loop

void loop() {
  digitalWrite(bluePin, 1);
  delay(500);
  digitalWrite(yellowPin, 1);
  delay(500);
  digitalWrite(redPin, 1);
  delay(500);
  digitalWrite(bluePin, 0);
  delay(500);
  digitalWrite(yellowPin, 0);
  delay(500);
  digitalWrite(redPin, 0);
  delay(500);


  digitalWrite(redPin, 1);
  delay(500);
  digitalWrite(yellowPin, 1);
  delay(500);
  digitalWrite(bluePin, 1);
  delay(500);
  digitalWrite(redPin, 0);
  delay(500);
  digitalWrite(yellowPin, 0);
  delay(500);
  digitalWrite(bluePin, 0);
  delay(500);

  digitalWrite(bluePin, 1);
  digitalWrite(yellowPin, 1);
  digitalWrite(redPin, 1);
  delay(1000);
  digitalWrite(redPin, 0);
  digitalWrite(yellowPin, 0);
  digitalWrite(bluePin, 0);
  delay(500);
}
