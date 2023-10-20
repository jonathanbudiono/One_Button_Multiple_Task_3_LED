#include "PushButton.h"
#include "Led.h"

PushButton pushButton(2);
Led redLed(11);
Led yellowLed(10);
Led greenLed(9);

void setup() {
    pushButton.begin();
}

void loop() {
    pushButton.update();

    unsigned long pressDuration = pushButton.getPressDuration();
    int pressCount = pushButton.getPressCount();

    // Jika ada salah satu LED yang menyala dan tombol ditekan sekali, matikan semua LED
    if (redLed.isOn() || yellowLed.isOn() || greenLed.isOn()) {
        if (pressCount == 1 && pressDuration > 500) {
            redLed.off();
            yellowLed.off();
            greenLed.off();
            pushButton.resetPressCount();
            return;
        }
    }

    // Jika tombol ditekan lebih dari 3 kali, reset pressCount
    if (pressCount > 3) {
        pushButton.resetPressCount();
    }

    if (pressCount == 1 && pressDuration > 4000) {
        greenLed.on();
        redLed.off();
        yellowLed.off();
        pushButton.resetPressCount();
    } else if (pressCount == 3 && pressDuration > 1000) {
        yellowLed.on();
        redLed.off();
        greenLed.off();
        pushButton.resetPressCount();
    } else if (pressCount != 3 && pressDuration > 1000) {
        //yellowLed.on();
        //redLed.off();
        //greenLed.off();
        pushButton.resetPressCount();    
    } else if (pressCount == 1 && pressDuration > 500) {
        redLed.on();
        yellowLed.off();
        greenLed.off();
        pushButton.resetPressCount();
    }
}