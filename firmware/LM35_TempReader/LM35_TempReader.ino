void setup() { Serial.begin(9600); }
void loop() {
  int val = analogRead(A0);
  float temp = (val * 500.0) / 1023.0;
  Serial.print("{\"nhiet_do\": ");
  Serial.print(temp);
  Serial.println("}");
  delay(1000);
}
