#include <Button.h>
Button btnAddLittleBasketAlice(5);
Button btnAddLittleBasketBob(4);
Button btnAddBigBasketAlice(3);
Button btnAddBigBasketBob(2);
unsigned int fruitsAlice;
unsigned int fruitsBob;


const int littleBasketSize =25;
const int bigBasketSize = 40;

String fruit = " apples";

void setup() {
  // Open serial connection at 9600bd
  Serial.begin(9600);

btnAddLittleBasketAlice.begin();
btnAddLittleBasketBob.begin();
btnAddBigBasketAlice.begin();
btnAddBigBasketBob.begin();

}

void loop() {
 //Add little basket to Alice
 if(btnAddLittleBasketAlice.pressed()) {
  fruitsAlice= fruitsAlice + littleBasketSize;
  Serial.print("Alice has picked: ");
  Serial.print(fruitsAlice);
  Serial.println(fruit);
  Serial.print("Bob has picked: ");
  Serial.print(fruitsBob);
  Serial.println(fruit);
  Serial.println("-------------------");
 }
  if(btnAddLittleBasketBob.pressed()) {
  fruitsBob= fruitsBob + littleBasketSize;
  Serial.print("Alice has picked: ");
  Serial.print(fruitsAlice);
  Serial.println(fruit);
  Serial.print("Bob has picked: ");
  Serial.print(fruitsBob);
  Serial.println(fruit);
  Serial.println("-------------------");
 }
  if(btnAddBigBasketAlice.pressed()) {
  fruitsAlice= fruitsAlice + bigBasketSize;
  Serial.print("Alice has picked: ");
  Serial.print(fruitsAlice);
  Serial.println(fruit);
  Serial.print("Bob has picked: ");
  Serial.print(fruitsBob);
  Serial.println(fruit);
  Serial.println("-------------------");
 }
  if(btnAddBigBasketBob.pressed()) {
  fruitsBob= fruitsBob + bigBasketSize;
  Serial.print("Alice has picked: ");
  Serial.print(fruitsAlice);
  Serial.println(fruit);
  Serial.print("Bob has picked: ");
  Serial.print(fruitsBob);
  Serial.println(fruit);
  Serial.println("-------------------");
 }
}
