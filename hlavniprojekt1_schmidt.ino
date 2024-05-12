#include <Keypad.h>

const byte ROWS = 4;
const byte COLS = 4;

char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte rowPins[ROWS] = {2, 4, 5, 15}; // GPIO2, GPIO4, GPIO5, GPIO15
byte colPins[COLS] = {16, 17, 18, 19}; // GPIO16, GPIO17, GPIO18, GPIO19

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

void setup() {
  Serial.begin(115200);
  Serial.println("Vítejte v Účtenkovně");
}

void loop() {
  char key = keypad.getKey();
  if (key != NO_KEY) {
    nahraniUctu(key);
  }
}

void nahraniUctu(char key) {
  Serial.println("Vyberte funkci: ");
  Serial.println("1. Nahrát další účtenku.");
  Serial.println("2. Zobrazit účtenky");

  while (NO_KEY) {
    key = keypad.getKey();
  

  if (key == '1') {
    cisloUctu();
  } else if (key == '2') {
    // Add code to display existing receipts
  }
  }
}

void cisloUctu() {
  Serial.println("Zvolte číslo účtenky:");
  char key = keypad.getKey();
  if (key == '1')
  {
    ucet1();
  }
  else if (key == '2')
  {
    ucet2();
  }
  else if (key == '3')
  {
    ucet3();
  }
  else if (key == '4')
  {
    ucet4();
  }
}

void ucet1() {
  Serial.println("ucet1");
}

void ucet2() {
  Serial.println("ucet2");
}

void ucet3() {
  Serial.println("ucet3");
}

void ucet4() {
  Serial.println("ucet4");
}
