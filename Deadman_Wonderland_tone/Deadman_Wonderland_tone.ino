int melody[] = {
  659, 659, 587, 659, 698, 659, 587, 0, 
  440, 659, 587, 659, 698, 784, 523, 587, 523, 494, 0,
  659, 659, 587, 659, 698, 659, 587, 0, 
  440, 659, 587, 659, 698, 784, 784, 784, 698, 659
};

int noteDurations[] = {
  5,5,5,4,4,1,1,5,
  5,5,5,4,4,2,5,3,5,3,5,
  5,5,5,4,4,1,1,5, 
  5,5,5,4,4,2,5,3,5,3
};
void setup() {
  for (int thisNote = 0; thisNote < 38; thisNote++) {
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(9, melody[thisNote], noteDuration);
    if(noteDurations[thisNote] != 1){
      int pauseBetweenNotes = noteDuration * 1.30;
      delay(pauseBetweenNotes);
    } else {
      delay(1100);
    }
    noTone(9);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
