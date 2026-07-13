#define msg7RESET 9
#define msg7Strobe 12
#define msg7DCout A3    
//Fixed to match your PCB wiring

int pwmPinG = 6;
int pwmPinR = 5;
int pwmPinB = 3;

int msgValues[7];

void setup(){
  pinMode(pwmPinR, OUTPUT);
  pinMode(pwmPinG, OUTPUT);
  pinMode(pwmPinB, OUTPUT);
    
  pinMode(msg7RESET, OUTPUT);
  pinMode(msg7Strobe, OUTPUT);
  
  // Initialize MSGEQ7
  digitalWrite(msg7RESET, LOW);
  digitalWrite(msg7Strobe, HIGH);
}

void loop(){
  // Reset the MSGEQ7 multiplexer
  digitalWrite(msg7RESET, HIGH);
  delayMicroseconds(5); // Changed delay to microseconds to prevent light stutter
  digitalWrite(msg7RESET, LOW);
  delayMicroseconds(100); // time for output to settle
  
  int sum = 0;
    
  // Read all 7 frequency bands
  for (int x = 0 ; x < 7 ; x++)  {
    digitalWrite(msg7Strobe, LOW);
    delayMicroseconds(35); // time for output to settle
        
    int spectrumRead = analogRead(msg7DCout);
    // 1023 is the max value for 10-bit ADC
    int value = map(spectrumRead, 0, 1023, 0, 255); 
        
    msgValues[x] = value;
    sum += value;
    
    digitalWrite(msg7Strobe, HIGH);
    delayMicroseconds(35);
  }

  // Map the 7 bands onto your 3 RGB channels
  int Gval = max(msgValues[0], msgValues[1]); // Bass / Low-mids
  int Bval = max(msgValues[2], msgValues[3]); // Mids / High-mids
  int Rval = max(msgValues[4], msgValues[5]); // Highs / Treble 
    
  // Noise filtering threshold
  int cutoff = max(30, sum / 5.0); 
  if (Rval < cutoff) Rval = 0;
  if (Gval < cutoff) Gval = 0;
  if (Bval < cutoff) Bval = 0;
  
  // Write final PWM brightness values to your MOSFETs
  analogWrite(pwmPinR, Rval);
  analogWrite(pwmPinG, Gval);
  analogWrite(pwmPinB, Bval);
  
  delay(10); // Small delay to smooth out the rendering loop
}
