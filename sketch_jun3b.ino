// Define pins
const int moisturePin = A0; // Soil moisture sensor pin
const int ledPin = 2;       // LED control pin
const int threshold = 100;  // Threshold value for soil moisture

void setup() {
  pinMode(moisturePin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(moisturePin);
  Serial.print("Soil Moisture: ");
  Serial.println(sensorValue);

  // If the soil moisture reading is under the threshold
  if (sensorValue < threshold) {
    digitalWrite(ledPin, HIGH); // Turn on the LED
  } else {
    digitalWrite(ledPin, LOW);  // Turn off the LED
  }
  
  delay(1000); // Delay for 1 second
}
