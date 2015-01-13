//Music playing with Piezo and Arduino
//Cordell Vannier
// www. nebomusic.net


//define speaker port
int speaker = 11;

//Variables for rhythm:

int tempo = 1000;
int w = tempo;
int h = w/2;
int q = h/2;
int e = q/2;
int s = e/2;

// Define Pitches for C scale

int d3 = 146;
int f3 = 174;
int g3 = 196;
int a3 = 220;
int b3 = 246;
int c4 = 261;
int d4 = 293;
int e4 = 329;
int f4 = 369;


//Fucntions for Star Spangled Banner
void star1() {
  int scale [] = {d3, f3, g3, d4, e4, f4};
  int scalerhythm [] = {e, e, q, q , q, h, e, e};
  for (int n = 0;n < 6;n++) {
    tone(speaker, scale[n], scalerhythm[n]);
    delay(scalerhythm[n]);
    
  }//End loop A
}// end star1

void star2() {
 int scale [] = {f3, g3, a3, d4, e4, f4};
 int scalerhythm [] = {q, q, q, h, q, h, e, e};
 for(int n = 0; n < 6;n++) {
   tone(speaker, scale[n], scalerhythm[n]);
    delay(scalerhythm[n]);
    
 }//end loop B
}//end star2

void star3() {
    int scale [] = {d3, f3, a3, b3, c4, d4};
    int scalerhythm [] = {h, e, e, q, q, q, q, q};
     for(int n = 0; n < 6;n++) {
     tone(speaker, scale[n], scalerhythm[n]);
    delay(scalerhythm[n]);
    
 }//end loop C
}//end star3


 

void setup() {
  //Set Speaker Pin to OutPut
  pinMode(speaker, OUTPUT);
}//end setup

void loop() {
  //Play the scale
  star1();
  star2();
  star3();
}//end loop
