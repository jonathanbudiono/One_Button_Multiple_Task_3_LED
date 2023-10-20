#ifndef PUSHBUTTON_H
#define PUSHBUTTON_H

class PushButton {
private:
    int buttonPin;
    int lastButtonState;
    int buttonState;
    unsigned long lastDebounceTime;
    unsigned long buttonPressTime;
    int pressCount;

public:
    PushButton(int btnPin);
    void begin();
    void update();
    int getPressCount();
    unsigned long getPressDuration();
    void resetPressCount();
};

#endif // PUSHBUTTON_H
