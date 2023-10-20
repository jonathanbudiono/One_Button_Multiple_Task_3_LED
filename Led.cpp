#include "Led.h"
#include <Arduino.h>

Led::Led(int pin) : ledPin(pin) {
    pinMode(ledPin, OUTPUT);
    off();
}

void Led::on() {
    digitalWrite(ledPin, HIGH);
}

void Led::off() {
    digitalWrite(ledPin, LOW);
}

bool Led::isOn() {
    return digitalRead(ledPin) == HIGH;
}
