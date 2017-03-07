#include <Button.h>
#include <Servo.h>

//create a button object on GPIO pin 13
Button btnRoll(13);
//Create a new servo object
Servo servo;
void setup() {
  //Start button
  btnRoll.begin();

  // Attach the servo on pin 9 to the servo object
  servo.attach(9);

  //Initialise a pseudo-random number generator
  randomSeed(analogRead(0));

  // Move Servo to position zero
  servo.write(0);

  // Adding something

  //Show steps for calibratiton
  for(int i = 1; i < 7;i++){
    setDice(i);
    delay(1000);
 }
}

void loop() {
  // Roll dice
  if (btnRoll.released(){
    updown();
    setDice(random(1,  7));
  }
}

void upDown(){

  //Move servo up and down
  setDice(6);
  delay(600);
  setDice(1);
  delay(600);
}
void setDice(int number) {

  //Map scale
  int dicepointer = map(number, 1, 6, 20, 140);

  //Move servo
  servo.write(dicepointer);

}
