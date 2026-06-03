#include <Keyboard.h>

const int buttonPin = 2;

void setup() {

  pinMode(buttonPin, INPUT_PULLUP);

  if (digitalRead(buttonPin) == LOW) {
    while (1);
  }

  Keyboard.begin();
  delay(3000);

  Keyboard.press(KEY_LEFT_GUI);
  delay(3000);
  Keyboard.releaseAll();

  Keyboard.println("notepad");
  Keyboard.write(KEY_RETURN);
  delay(3000);
  Keyboard.println("You were hacked, lol");

  Keyboard.end();
}

void loop() {

}
