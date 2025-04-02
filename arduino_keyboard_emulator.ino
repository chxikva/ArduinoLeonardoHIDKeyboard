#include <Keyboard.h>

void setup() {
  Serial.begin(9600);
  Keyboard.begin();
}

void loop() {
  if (Serial.available() > 0) {
    char command = Serial.read();

    switch (command) {
      // Function keys
      case '1': Keyboard.press(KEY_F1); break;
      case '2': Keyboard.press(KEY_F2); break;
      case '3': Keyboard.press(KEY_F3); break;
      case '4': Keyboard.press(KEY_F4); break;
      case '5': Keyboard.press(KEY_F5); break;
      case '6': Keyboard.press(KEY_F6); break;
      case '7': Keyboard.press(KEY_F7); break;
      case '8': Keyboard.press(KEY_F8); break;
      case '9': Keyboard.press(KEY_F9); break;
      case '0': Keyboard.press(KEY_F10); break;
      case '-': Keyboard.press(KEY_F11); break;
      case '=': Keyboard.press(KEY_F12); break;

      // Letters A–Z
      case 'A': case 'a': Keyboard.press('a'); break;
      case 'B': case 'b': Keyboard.press('b'); break;
      case 'C': case 'c': Keyboard.press('c'); break;
      case 'D': case 'd': Keyboard.press('d'); break;
      case 'E': case 'e': Keyboard.press('e'); break;
      case 'F': case 'f': Keyboard.press('f'); break;
      case 'G': case 'g': Keyboard.press('g'); break;
      case 'H': case 'h': Keyboard.press('h'); break;
      case 'I': case 'i': Keyboard.press('i'); break;
      case 'J': case 'j': Keyboard.press('j'); break;
      case 'K': case 'k': Keyboard.press('k'); break;
      case 'L': case 'l': Keyboard.press('l'); break;
      case 'M': case 'm': Keyboard.press('m'); break;
      case 'N': case 'n': Keyboard.press('n'); break;
      case 'O': case 'o': Keyboard.press('o'); break;
      case 'P': case 'p': Keyboard.press('p'); break;
      case 'Q': case 'q': Keyboard.press('q'); break;
      case 'R': case 'r': Keyboard.press('r'); break;
      case 'S': case 's': Keyboard.press('s'); break;
      case 'T': case 't': Keyboard.press('t'); break;
      case 'U': case 'u': Keyboard.press('u'); break;
      case 'V': case 'v': Keyboard.press('v'); break;
      case 'W': case 'w': Keyboard.press('w'); break;
      case 'X': case 'x': Keyboard.press('x'); break;
      case 'Y': case 'y': Keyboard.press('y'); break;
      case 'Z': case 'z': Keyboard.press('z'); break;

      // Numbers 1–9
      case '!': Keyboard.press('1'); break;
      case '@': Keyboard.press('2'); break;
      case '#': Keyboard.press('3'); break;
      case '$': Keyboard.press('4'); break;
      case '%': Keyboard.press('5'); break;
      case '^': Keyboard.press('6'); break;
      case '&': Keyboard.press('7'); break;
      case '*': Keyboard.press('8'); break;
      case '(': Keyboard.press('9'); break;
      case ')': Keyboard.press('0'); break;

      // Movement keys
      case '[': Keyboard.press(KEY_UP_ARROW); break;
      case ']': Keyboard.press(KEY_DOWN_ARROW); break;
      case '{': Keyboard.press(KEY_LEFT_ARROW); break;
      case '}': Keyboard.press(KEY_RIGHT_ARROW); break;

      // Special keys
      case '\n': // newline = Enter
        Keyboard.press(KEY_RETURN);
        break;
      case '\t': // tab
        Keyboard.press(KEY_TAB);
        break;
      case '`': // Escape
        Keyboard.press(KEY_ESC);
        break;
      case '\\': // Backspace
        Keyboard.press(KEY_BACKSPACE);
        break;
      case ' ': // Spacebar
        Keyboard.press(' ');
        break;

      // Default: unknown key
      default:
        break;
    }

    delay(100); // slight delay to simulate human input
    Keyboard.releaseAll(); // release after press
  }
}
