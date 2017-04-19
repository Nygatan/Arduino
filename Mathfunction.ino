void setup() {
  // Open serial connection at 9600bd
Serial.begin(9600);
}



void loop() {
long answear = adder(628, 709);
Serial.println(answear);
delay(1000);
}
  
long adder(long value1, long value2){
  // Add values and return sum
  long sum = value1 + value2;
  return sum;
}
  


