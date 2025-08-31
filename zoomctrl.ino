
#include "Keyboard.h"
#include <ezButton.h>

const int DEBOUNCE_DELAY = 50; 

ezButton b1(2, INTERNAL_PULLUP);
ezButton b2(3, INTERNAL_PULLUP);
ezButton b3(4, INTERNAL_PULLUP);
ezButton b4(5, INTERNAL_PULLUP);
ezButton b5(6, INTERNAL_PULLUP);
ezButton b6(7, INTERNAL_PULLUP);


void setup() {
  Serial.begin(9600);
  Keyboard.begin();

  b1.setDebounceTime(DEBOUNCE_DELAY);
  b2.setDebounceTime(DEBOUNCE_DELAY);
  b3.setDebounceTime(DEBOUNCE_DELAY);
  b4.setDebounceTime(DEBOUNCE_DELAY);
  b5.setDebounceTime(DEBOUNCE_DELAY);
  b6.setDebounceTime(DEBOUNCE_DELAY);
  b6.setDebounceTime(DEBOUNCE_DELAY);
}


void loop()
{
  b1.loop();
  b2.loop();
  b3.loop();
  b4.loop();
  b5.loop();
  b6.loop();

  if(b1.isPressed()){
    Serial.println("The button1 is pressed (mute)");

    Keyboard.press(KEY_LEFT_ALT);   // Zoom code
    Keyboard.press('a');
  }

  if(b2.isPressed()){
    Serial.println("The button2 is pressed (video)");

    Keyboard.press(KEY_LEFT_ALT);   // Zoom code
    Keyboard.press('v');
  }

  if(b3.isPressed()){
    Serial.println("The button3 is pressed (switch camera)");
    
    Keyboard.press(KEY_LEFT_ALT);   // Zoom code
    Keyboard.press('n');
  }

  if(b4.isPressed()){
    Serial.println("The button4 is pressed (hangup)");

    Keyboard.press(KEY_LEFT_ALT);   // Zoom code
    Keyboard.press('q');
  }

  if(b5.isPressed()){
    Serial.println("The button5 is pressed (cut)");
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('c');
  }

  if(b6.isPressed()){
    Serial.println("The button6 is pressed (paste)");
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('v');
  }


  if(b1.isReleased()){
    Serial.println("The button1 is released");
    Keyboard.releaseAll();
  }

  if(b2.isReleased()){
    Serial.println("The button2 is released");
    Keyboard.releaseAll();
  }

  if(b3.isReleased()){
    Serial.println("The button3 is released");
    Keyboard.releaseAll();
  }

  if(b4.isReleased()){
    Serial.println("The button4 is released");
    Keyboard.releaseAll();
  }

  if(b5.isReleased()){
    Serial.println("The button5 is released");
    Keyboard.releaseAll();
  }

  if(b6.isReleased()){
    Serial.println("The button6 is released");
    Keyboard.releaseAll();
  }




}