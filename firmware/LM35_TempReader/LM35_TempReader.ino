int adcValues[3]; 
float nhietDo[3]; 
char chuoi[50];

void setup() { 
  Serial.begin(9600); 
}

void loop() {
  for(int i=0; i<3; i++) {
    adcValues[i] = analogRead(A0 + i);
    nhietDo[i] = (adcValues[i] * 500.0) / 1023.0;
  }

  Serial.print("{\"t0\": ");
  Serial.print((int)nhietDo[0]);
  Serial.print(", \"t1\": ");
  Serial.print((int)nhietDo[1]);
  Serial.print(", \"t2\": ");
  Serial.print((int)nhietDo[2]);
  Serial.println("}");

  delay(100);
}