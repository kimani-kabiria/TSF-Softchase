//atmega 88 >, 13,14,15,16,17

int timer = 60;  
int timer1 = 150;             
int ledPins[] = {8,9,10,11,12,13};
int pinCount = 6;
int pinCount1=4 ;
int pinCount2=3 ;
int pinCount3=2 ;
int pinCount4=1 ;
int blinkTime=40;
//bool eyesStinging=1;
void setup(){ 
  for (int thisPin = 0; thisPin < pinCount; thisPin++) {
    pinMode(ledPins[thisPin], OUTPUT);
  }
}

void loop(){ 
flashAcross(10);
scanForward(5);
scanBackward(5);

blinkyblinky(20);
still(20);
blinkyblinky(20);
still(20);
blinkyblinky(20);
still(20);
blinkyblinky(20);
still(20);
blinkyblinky(20);
still(20);
stilloff(10);
flashAcrossone(5);
Print(5);
still(20);
blinkyblinky1(10);
blinkyblinky2(10);
blinkyblinky1(10);
blinkyblinky2(10);
blinkyblinky1(10);
blinkyblinky2(10);
blinkyblinky1(10);
blinkyblinky2(10);
blinkyblinky1(10);
blinkyblinky2(10);
blinkyblinky1(10);
blinkyblinky2(10);
blinkyblinky1(10);
blinkyblinky2(10);
blinkyblinky1(10);
blinkyblinky2(10);
blinkyblinky1(10);
blinkyblinky2(10);
blinkyblinky1(10);
blinkyblinky2(10);
stilloff(10);
blinkyblinky1(20);
blinkyblinky2(20);
blinkyblinky1(20);
blinkyblinky2(20);
blinkyblinky1(20);
blinkyblinky2(20);
blinkyblinky1(20);
blinkyblinky2(20);
blinkyblinky1(20);
blinkyblinky2(20);
blinkyblinky1(20);
blinkyblinky2(20);
blinkyblinky1(20);
blinkyblinky2(20);
blinkyblinky1(20);
blinkyblinky2(20);
//acrossonebyoneon(10);
}
void flashAcross(int repeat){
for(int j=0;j<repeat;j++){
  for (int thisPin = 0; thisPin < pinCount; thisPin++) {
    digitalWrite(ledPins[thisPin], LOW);
    delay(timer);
    digitalWrite(ledPins[thisPin], HIGH);
  }
  for (int thisPin = pinCount - 1; thisPin >= 0; thisPin--) {  
    digitalWrite(ledPins[thisPin], LOW);
    delay(timer);
    digitalWrite(ledPins[thisPin], HIGH);
  }
 }
}
void flashAcrossone(int repeat){
for(int j=0;j<repeat;j++){
  for (int thisPin = 0; thisPin < pinCount; thisPin++) {
    digitalWrite(ledPins[thisPin], HIGH);
    delay(timer);
    digitalWrite(ledPins[thisPin], LOW);
  }
  for (int thisPin = pinCount - 1; thisPin >= 0; thisPin--) {  
    digitalWrite(ledPins[thisPin], HIGH);
    delay(timer);
    digitalWrite(ledPins[thisPin], LOW);
  }
  digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(13,HIGH);
    delay(2000);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
    for (int thisPin = pinCount - 1; thisPin >= 0; thisPin--) {  
    digitalWrite(ledPins[thisPin], HIGH);
    delay(timer);
    digitalWrite(ledPins[thisPin], LOW);
  }
  for (int thisPin = 0; thisPin < pinCount; thisPin++) {
    digitalWrite(ledPins[thisPin], HIGH);
    delay(timer);
    digitalWrite(ledPins[thisPin], LOW);
  }
  digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(13,HIGH);
    delay(2000);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
 }
 
}

void scanForward(int repeat){
for(int j=0;j<repeat;j++){
  for (int thisPin = 0; thisPin < pinCount; thisPin++) {
    digitalWrite(ledPins[thisPin], HIGH);
    delay(timer);
  }
  delay(1000);
  for (int thisPin = pinCount - 1; thisPin >= 0; thisPin--) {  
    digitalWrite(ledPins[thisPin], LOW);
    delay(timer);
  }
  
 }
}
void scanBackward(int repeat){
for(int j=0;j<repeat;j++){
  for (int thisPin = 0; thisPin < pinCount; thisPin++) {
    digitalWrite(ledPins[thisPin], LOW);
    delay(timer);
  }
  for (int thisPin = pinCount - 1; thisPin >= 0; thisPin--) {  
    digitalWrite(ledPins[thisPin], HIGH);
    delay(timer);
  }
   delay(1000);
 }
}

void blinkyblinky(int repeat){
for(int j=0;j<repeat;j++){
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(13,HIGH);
    delay(blinkTime);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
    delay(blinkTime);
    }
    }
//    void blinkyblinkyP(int repeat){
//for(int j=0;j<repeat;j++){
//    digitalWrite(8,HIGH);
//    digitalWrite(9,LOW);
//    digitalWrite(10,HIGH);
//    digitalWrite(11,HIGH);
//    digitalWrite(12,LOW);
//    digitalWrite(13,HIGH);
//    delay(blinkTime);
//    digitalWrite(8,LOW);
//    digitalWrite(9,HIGH);
//    digitalWrite(10,LOW);
//    digitalWrite(11,LOW);
//    digitalWrite(12,HIGH);
//    digitalWrite(13,LOW);
//    delay(blinkTime);
//    }
//    }
void blinkyblinky1(int repeat){
   for(int j=0;j<repeat;j++){
    digitalWrite(8,HIGH);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,HIGH);
    delay(blinkTime);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
    delay(blinkTime);
   }
}
void blinkyblinky2(int repeat){
   for(int j=0;j<repeat;j++){
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
    delay(blinkTime);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
    delay(blinkTime);
    }
    }
    void still(int repeat){
    for(int j=0;j<repeat;j++){
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(13,HIGH);
    
    delay(80);
    }
    }
     void stilloff(int repeat){
    for(int j=0;j<repeat;j++){
     digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(13,HIGH);
    delay(300);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
    delay(300);
    }
    }
  void Print(int repeat){
for(int j=0;j<repeat;j++){
  for (int thisPin = 0; thisPin < pinCount; thisPin++) {
    digitalWrite(ledPins[thisPin], HIGH);
    delay(timer);
  }
delay(1000);
  for (int thisPin = 0; thisPin < pinCount; thisPin++) {
    digitalWrite(ledPins[thisPin], LOW);
    delay(timer);
  }
  delay(1000);
  for (int thisPin = pinCount - 1; thisPin >= 0; thisPin--) {  
    digitalWrite(ledPins[thisPin], HIGH);
    delay(timer);
  }
  delay(1000);
  for (int thisPin = pinCount - 1; thisPin >= 0; thisPin--) {  
    digitalWrite(ledPins[thisPin], LOW);
    delay(timer);
  }
  delay(1000);
}
  }
