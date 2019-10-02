/* This code is based on learnelectronics' tutorial video available here: https://www.youtube.com/watch?v=SHIcliL4O14 */

#include <Keyboard.h>

void setup() {
  //LED is no longer handled by a digital IO pin - use 3.3V or 5V pin. 
  pinMode(2, INPUT_PULLUP); 
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP); 
  pinMode(10, INPUT_PULLUP);
  pinMode(11, INPUT_PULLUP);
  pinMode(12, INPUT_PULLUP);
  pinMode(13, INPUT_PULLUP);
  pinMode(A0, INPUT_PULLUP);       
  pinMode(A1, INPUT_PULLUP);
  pinMode(A2, INPUT_PULLUP);
  pinMode(A3, INPUT_PULLUP);
  pinMode(A4, INPUT_PULLUP);
  pinMode(A5, INPUT_PULLUP); 
}

void loop() {
   // put your main code here, to run repeatedly:
   Keyboard.begin();
   if (digitalRead(2) == 0)
   {
      Keyboard.write(KEY_DELETE);
      delay(200);
   }
   else if (digitalRead(3) == 0)
   {
      Keyboard.write(KEY_RIGHT_ALT);
      delay(200);
   }
   else if (digitalRead(4) == 0)
   {
      Keyboard.write(KEY_RIGHT_CTRL);
      delay(200);
   }
   else if (digitalRead(5) == 0)
   {
      Keyboard.write(KEY_TAB);
      delay(200);
   }
   else if (digitalRead(6) == 0)
   {
      Keyboard.write(KEY_ESC);
      delay(200);
   }
   else if (digitalRead(7) == 0)
   {
      Keyboard.write('1');
      delay(200);
   }
   else if (digitalRead(8) == 0)
   {
      Keyboard.write('2');
      delay(200);
   }
   
   else if (digitalRead(9) == 0)
   {
      Keyboard.write('3');
      delay(200);
   }
   else if (digitalRead(A0) == 0)
   {
      Keyboard.write('4'); 
      delay(200);
   }
   else if (digitalRead(10) == 0)
   {
      Keyboard.write(KEY_PAGE_DOWN);
      delay(100);                   //Shorter delay for Page Down and Page Up
   }
   else if (digitalRead(11) == 0)
   {
      Keyboard.write(KEY_DOWN_ARROW);
      delay(200);
   }
   else if (digitalRead(12) == 0)
   {
      Keyboard.write(KEY_RIGHT_ARROW);
      delay(200);
   }
   else if (digitalRead(13) == 0)
   {
      Keyboard.write('+');
      delay(200);
   }
   else if (digitalRead(A1) == 0)
   {
      Keyboard.write((char) 0x20); //Space
      delay(200);
   }
   else if (digitalRead(A2) == 0)
   {
      Keyboard.write(KEY_LEFT_ARROW);
      delay(200);
   }
   else if (digitalRead(A3) == 0)
   {
      Keyboard.write(KEY_UP_ARROW);
      delay(200);
   }
   else if (digitalRead(A4) == 0)
   {
      Keyboard.write(KEY_PAGE_UP); 
      delay(100);                   //Shorter delay for Page Down and Page Up
   }
    else if (digitalRead(A5) == 0)
   {
      Keyboard.write(KEY_RETURN);
      delay(200);
   } 
   Keyboard.end();
}
