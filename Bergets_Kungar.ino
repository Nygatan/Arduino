void setup() {
  // open serial connection at 9600 bd
  Serial.begin(9600);

}

void loop() {
  // Get random value between 0 and 9
  byte value= random(0,15);
String Personer;

switch(value){
  case 0:
   Personer = "Anders Hogberg";
   break;
   case 1:
    Personer = "johannes Losbeck";
    break;
    case 3:
     Personer = "Roland Spetz";
     break;
     case 4:
     Personer = "Jimmy Helgesson";
     break;
     case 5: 
      Personer = "Pontus Henrysson";
     break;
     case 6:
     Personer = "Anders Jonasson";
     break;
     case 7:
     Personer = "Mats Waldermarsson";
     break;
     case 8:
     Personer = "Bengt Helgesson";
     break;
     default:
     Personer ="Alla andra tomtar";
     break;
}
Serial.print("Bergets kung ");
Serial.println(Personer);
delay(1000);    

}
