const int quantityApples = 1337;
const int quantityBananas = 42;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(quantityApples > quantityBananas) {
  Serial.println("We've got more apples than bananas.");
  }
  else if(quantityApples < quantityBananas) {
  Serial.println("We've got less apples than bananas.");
  }
  else {
  Serial.println("We've got the same amount of apples and bananas.");
  }

  delay(1000);
}
