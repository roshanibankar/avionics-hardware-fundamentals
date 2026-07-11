
const int FILTERED_POT_PIN= A0;
void setup() {
  Serial.begin(19200); // FOR SMOOTH REAL TIME PLOTTING
  pinMode(FILTERED_POT_PIN, INPUT);

}

void loop() {
  int rawADC=analogRead(FILTERED_POT_PIN);
  float voltage = (rawADC * 5.0) / 1023.0; // VOLTAGE 5V
  Serial.print("Noisy_Input_Signal:");
  Serial.print(simulatedNoisyVoltage);
  Serial.print(",");
  Serial.print("Filtered_Output_Clean:");
  Serial.println(filteredVoltage);
  delay(10);
}
