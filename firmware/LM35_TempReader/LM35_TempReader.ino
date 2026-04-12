void setup() {
  Serial.begin(9600);
}

void loop() {
  // Đọc giá trị ADC từ chân A0 (0 - 1023)
  int adcValue = analogRead(A0);
  
  // Chuyển đổi sang nhiệt độ Celsius
  float temp = (adcValue * 500.0) / 1023.0; 
  
  Serial.print("Nhiet do: ");
  Serial.println(temp);
  
  delay(1000);
}
