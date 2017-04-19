const boolean likeApples = true;
const boolean likeBananas = true;
const boolean likeRasins = true;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  if(likeApples == true && likeBananas == false) {
  Serial.println("Have an apple!");
  }
  else if(likeApples == false && likeBananas == true) {
  Serial.println("Have a Banana!");
  }
  if(likeRasins == true){
    Serial.println("Have some fruit salad with rasins!");
   
  }
  else if(likeApples == true && likeBananas == true) {
  Serial.println("Have some fruit salad without Rasins!");
  }
  else {
  Serial.println("You don't like fruits right?");
  }
  // put your main code here, to run repeatedly:
 delay(1000);
}
