#include "DigiKeyboardDe.h"

void setup() {
  pinMode(1, OUTPUT);
}

void loop() {
  DigiKeyboardDe.update();
}
