//Servo Test
//Range: 0 to 180

//Bring in Servo Object and Functions
#include <Servo.h>

//Create Instance of Servo Object
Servo leftwheel;
Servo rightwheel;
int lightPin = 0;//Input Pin
int lightValue = 0; //Variable to store the sensor value

//Setup - Run One Time
void setup() {
  //Attach Servo to Pin 9
  leftwheel.attach(9);//Servo A
  rightwheel.attach(10);//Servo B
  //Rotate Servo at 0 and 180 180 is counter
  Serial.begin(9600);
  
  leftwheel.write(0);
  delay(2000);
  leftwheel.write(90);
  
  rightwheel.write(0);
  delay(2000);
  rightwheel.write(90);
  
  leftwheel.write(180);
  delay(4000);
  rightwheel.write(180);
  delay(4000);
  leftwheel.write(90);
  rightwheel.write(90);
  
  leftwheel.write(0);
  delay(3000);
  rightwheel.write(0);
  delay(3000); 
  leftwheel.write(90);
  rightwheel.write(90);
  
  rightwheel.write(180);
  delay(1000);
  rightwheel.write(90);
  
  leftwheel.write(180);
  delay(1000);
  leftwheel.write(90); 
    
}

void loop() {
  //Using the photo-resistor
  Serial.println(analogRead(0));
  
  
  if (analogRead(0) > 550) {
    leftwheel.write(180);
    rightwheel.write(0);
  }
  
  if (analogRead(0) < 550) {
    leftwheel.write(90);
    rightwheel.write(90);
  }
}
