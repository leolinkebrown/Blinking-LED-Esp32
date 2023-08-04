const int LED_PIN = 13; //LED pin is defined
void setup() {
  pinMode (LED_PIN, OUTPUT);  // Pin 13 is set as OUTPUT
  Serial.begin(9600);
}
void loop() {
  digitalWrite (LED_PIN, HIGH); // LED on
  Serial.println("LED On!");
  delay(1000);  // delay of 1 sec
  digitalWrite (LED_PIN, LOW);  // LED off
  Serial.println("LED Off!");
  delay(1000);  // delay of 1 sec
}
