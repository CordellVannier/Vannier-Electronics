//Cordell Vannier
//LED Blink Program

//My Functions

void blink () {
  digitalWrite (9, HIGH);
  delay(50);
  digitalWrite(9, LOW);
  delay(50);
}//end blink

//Vairables and Fucntions
//Array to hold up LED pin numbers
int ledPins [] = {2, 3, 4 , 5 , 6 , 7, 8, 9};

//turn LED's on one at a time
void blinkOn() {
 //for loop to turn each light on
for (int i = 0; i < 8; i++) {
 digitalWrite (ledPins[i], HIGH); //light on
 delay(100);
  }
 for (int i = 7; i > -1; i--) {
  digitalWrite(ledPins[i], LOW); //light off
  delay(100);// end loop 1
 }
for (int i = 8; i > -1; i-=2) {
 digitalWrite (ledPins[i], HIGH); //light on
 delay(50);
 }
 for (int i = 0; i < 8; i+=2) { 
 digitalWrite (ledPins[i], LOW); //light off
 delay(50);//end loop 2
 }
}

//setup function
void setup () {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}


//loop function
void loop () {
  blink();
}

