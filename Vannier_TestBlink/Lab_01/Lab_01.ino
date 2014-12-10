//Cordell Vannier
//Lab 01

//Functions
void printHappy(String name) {
  String result = "Happy Birthday" + name;
  Serial.println(result);
} //End printHappy

float computeArea(float wid, float hei) {
  float area = wid*hei;
  return area;
} //End float

void function1() {
 Serial.begin(9600);
 Serial.println ("I am an Arduino and I communicate");
 Serial.println ("9600 Baud rate.Ports 1 and 0 are used");
 Serial.println ("for serial communication.");
 Serial.println ("");
 Serial.println ("Serial communication works well for debugging"); 
 Serial.println ("and monitoring sensor values during the");
 Serial.println ("execution of a program.");
 Serial.println ("");
}

void function2a (int x, int y) {
  Serial.println ((x/2)*y);
  
}

void function2b (int x, int y) {
Serial.println (2*x+x*y);
 Serial.println ("");
}

void function3() {
 String Characters [] = {"Obi Wan Kenobi", "Jonah Hill", "Robin Williams", "Eva Mendes", "Chewbacca",}; 
 Serial.println ("My favorite movie character are:"); 
 for (int i = 0; i <5; i++) {
   Serial.println (Characters[i]);  
 }
}

void function4() {
  //Arrays
  String Numbers [] = {"1", "2", "3", "4", "5", "6", "7", "8"};
  Serial.println ("The Numbers are:  ");
  for (int i = 0; i < 8; i++) {
    Serial.println (Numbers [i]); 
  }//End loop 1
  for (int i = 7; i > -1; i--) {
    Serial.println (Numbers [i]);
   }//End loop 2
   for (int i = 1; i < 8 ; i+=2) {
     Serial.println (Numbers [i]); 
   }//End loop 3
  for (int i = 0; i < 8; i+=2) {
    Serial.println (Numbers [i]); 
  } //End loop 4
  for (int i = 8; i > -1; i-=2) {
    Serial.println (Numbers [i]);  
  } //End loop 5
  for (int i = 7; i > -1; i-=2) {
   Serial.println (Numbers [i]); 
  } //End loop 6
}

void function5 () {
  String Notes [] = {"C", "D", "E", "F", "G", "A", "B", "C"};
  for (int i = 0; i < 2; i++) {
    for (int p = 0; p < 8; p++) {
      Serial.println (Notes[p]);
    }
  }
Serial.println ("");
}

void printFibo (int n) {
  int prev = 0
  int cur= 1
  int fibo = 0 
  Serial.println ("The Fibonacci Sequence starts:");
  for (int i = 0; i < n; i++) {
    prev = cur;
    cur = fibo;
    fibo= prev + cur;
    Serial.println(fibo);
  }
}

float function7(int F, int D) { 
    float W = F/D;
    return W;
}

void function8 () {
  for (int i = 0; i <100000; i++) {
    Serial.println(i*10);
    Serial.println ("");
  }//It ran out of space so it started over in the negatives and kept going.
}

void function9() {
  long computeSum = 0;
  for (int i = 0; i <1000; i++) {
    if (i % 3 == 0 || i % 5 == 0;) {
      computeSum = computeSum + i;
    }
  }
  Serial.println ("The sum of all multiplies on 3 and 5 from 0 to 99");
  Serial.println(computeSum);
  Serial.prinln("");
}
  
void function 10 () {
  //concantentation
  String words [] = {"What", "Have", "You", "Done", "Love"}
  String result = "";
  for (int i = 0; i <5; i++) {
    int index = random(5);
    result += words[index] + "";
  }
}
  
void setup() {
 Serial.begin(9600);
 function1();
 function2a(120, 512);
 function2b(97, 32);
 function3();
 function4();
 function5();
 printFibo();
 function7();
 Serial.println (function7(24, 65));
 function8();
 function9();
 function10();
} //end setup

void loop(){
  
}//end loop
