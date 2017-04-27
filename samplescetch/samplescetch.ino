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
  delay(2000);
  Serial.print("Eingabe: ");
  Serial.print(incoming);
  digitalWrite(LEDpin, LOW);
}
