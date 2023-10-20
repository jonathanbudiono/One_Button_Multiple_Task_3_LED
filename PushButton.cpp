#include "PushButton.h"
#include <Arduino.h>

PushButton::PushButton(int btnPin) 
  : buttonPin(btnPin), lastButtonState(HIGH), buttonState(HIGH), 
  lastDebounceTime(0), buttonPressTime(0), 
  pressCount(0) {}

void PushButton::begin() {
    pinMode(buttonPin, INPUT_PULLUP);
}

void PushButton::update() {
    int reading = digitalRead(buttonPin);
    if (reading != lastButtonState) {
        lastDebounceTime = millis();
    }

    if ((millis() - lastDebounceTime) > 50) {
        if (reading != buttonState) {
            buttonState = reading;
            if (buttonState == LOW) { // Tombol ditekan
                buttonPressTime = millis();
            } else {
                pressCount++;
            }
        }
    }
    lastButtonState = reading;
}

int PushButton::getPressCount() {
    return pressCount;
}

unsigned long PushButton::getPressDuration() {
    return millis() - buttonPressTime;
}

void PushButton::resetPressCount() {
    pressCount = 0;
}
