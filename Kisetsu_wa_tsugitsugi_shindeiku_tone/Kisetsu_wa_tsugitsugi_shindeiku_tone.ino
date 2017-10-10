#include "pitches.h"

int melody[] = {
  alto0, meio, baixo, meio, alto0, meio, baixo, meio, alto1, meio,
  baixo, meio, alto0, meio, baixo, meio, alto_1, meio, baixo, meio,
  alto_1, meio, baixo, meio, alto0, meio, baixo, meio, alto_2, meio,
  alto0, meio, alto_1, meio, baixo, meio, alto_1, meio, baixo, meio,
  alto0, meio, baixo, meio, alto1, meio, baixo, meio, alto0, meio,
  baixo, meio, alto_1, meio, baixo, meio, alto0, meio, baixo, meio,
  alto1, meio, baixo, meio, alto0, meio, baixo, meio, alto0, meio,
  baixo, meio, alto_1, meio, baixo, meio, alto_2, meio, baixo, meio,
  alto_3, meio, baixo, meio, alto_2, meio, baixo, meio, alto_1, meio,
  baixo, meio, alto_4, meio, baixo, meio, alto0, meio, baixo, meio,
  alto0, meio, baixo, meio, alto0, meio, baixo, meio, alto1, meio,
  baixo, meio, alto0, meio, baixo, meio, alto_1, meio, baixo, meio,
  alto_1, meio, baixo, alto_4, alto_1, alto1, alto1
  
};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
//  5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
//  5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
//  5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
//  5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
//  5,5,5,5,3,3

//  7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,
//  7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,
//  7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,
//  7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,
//  7,7,7,7,5,5

  9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,
  9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,
  9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,
  9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,
  9,9,9,9,9,9,9
};

void setup() {
  // iterate over the notes of the melody:
  for (int thisNote = 0; thisNote < 128; thisNote++) {
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(9, melody[thisNote], noteDuration);
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(9);
  }
}

void loop() {
  // no need to repeat the melody.
}
