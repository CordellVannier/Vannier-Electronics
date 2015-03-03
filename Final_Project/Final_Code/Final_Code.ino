//Adam & Philip Final Project

int speaker = 11;
int tempo=1000;
int w = tempo; //whole note 1


//define pitches for c scale

int f4 = 350;



int sensorPin= 0; // input pin
int sensorValue= 0;// variable to store the sensor valu

void song() {
  
//     tempo= analogRead(sensorPin);
 w = tempo; //whole note 1

  //note for hakuna matata
//  int lineANotes [] = {f4};
//  int lineARhythm [] = {w};
//  
//  for (int n = 0; n < 64; n++) {
//    tempo= analogRead(sensorPin);
// w = tempo; //whole note 1
 

   //tone(speaker, lineANotes[n], lineARhythm[n]);
   tone(speaker, 440, 1000);
  delay(1000);
  //}

}


void blink(){
  digitalWrite(8, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(7, LOW);
}


//bring servo object and function

#include<Servo.h>
//create instance of servo object
Servo servoA;
Servo servoB;

//set up -run one thime

void setup() {
  pinMode(speaker, OUTPUT);
  pinMode(8, OUTPUT);
 pinMode(7, OUTPUT);
  //Attach Servo to pin 9
  servoA.attach(9);//Left Wheel // number reads 470
  servoB.attach(10);//Right Wheel
  song();
   blink();
  Serial.begin(9600);
}

void loop() {
  //using photo resistor
  //song();
  Serial.println(analogRead(0));
   
  if (analogRead(1) >700) {
  
      if(analogRead(0) > 700){
        servoA.write(90);
        servoB.write(180);
      }
      if (analogRead(0)<700){
        servoA.write(0);
        servoB.write(90);
        
      }
      
  }
  
  else {
    servoA.write(90);
    servoB.write(90);
  }
}

