int LEDpin = 13;
String incoming = "\n";

void setup() {
  Serial.begin(9600);
}

void loop() {
  while(Serial.available()){
    incoming = Serial.readString();
    
  }
  digitalWrite(LEDpin, HIGH);
  delay(1000);
  Serial.print("Input: ");
  Serial.print(incoming);
  digitalWrite(LEDpin, LOW);
  delay(200);
}
