/*
do 261 re 294 mi 329 fa 349 sol 392 la 440 si 493 DO 523
*/

#define do_ 261 
#define re 294
#define mi 329
#define fa 349
#define sol 392
#define la 440
#define si 493
#define DO 523
#define buzzeerPin 11

int nota[] = {do_, re, mi, fa, sol, la, si, DO };

void setup() {
  pimMode(buzzerPin,OUTPUT);
}

void loop() {
  for(int i= 0; i<8 ; i++){
    tone(buzzerPin,note[i]);
    delay(1000);
  }
  delay(1500);
}
