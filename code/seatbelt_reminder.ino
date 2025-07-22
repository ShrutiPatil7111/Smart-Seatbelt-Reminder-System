const int fsrPin = A0;         // FSR connected to analog pin A0
const int buttonPin = 2;       // Button connected to digital pin 2
const int ledPin = 9;          // LED connected to digital pin 9 through 220Ω resistor
 
int pressureThreshold = 100;   // Adjust this value based on your FSR reading
// int pressureThreshold = 10;  // for DIY FSR

void setup() {
  pinMode(buttonPin, INPUT_PULLUP); // Using internal pull-up, so button connects to GND
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600); // Open serial monitor to see FSR values and status
}

void loop() {
  int fsrReading = analogRead(fsrPin); // Read FSR analog value, i.e, seat pressure
  bool seatbeltFastened = (digitalRead(buttonPin) == LOW); // LOW = pressed = fastened

  // Debug output
  Serial.print("FSR Value: ");
  Serial.print(fsrReading);
  Serial.print(" | Seatbelt: ");
  Serial.println(seatbeltFastened ? "Fastened" : "Not Fastened");

  // Turn on LED if person is sitting and seatbelt is NOT fastened
  if (fsrReading > pressureThreshold && !seatbeltFastened) {
    digitalWrite(ledPin, HIGH); // Alert ON
  } else {
    digitalWrite(ledPin, LOW); // Alert OFF
  }

  delay(300); // Slight delay for stability(reduces flickering)
}