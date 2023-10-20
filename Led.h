#ifndef LED_H
#define LED_H

class Led {
private:
    int ledPin;

public:
    Led(int pin);
    void on();
    void off();
    bool isOn();
};

#endif // LED_H
