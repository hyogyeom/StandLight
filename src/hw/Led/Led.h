#ifndef __LED_H__
#define __LED_H__

class Led
{
private:
    const bool ON = 1;
    const bool OFF = 0;
    int pinNumber;
    bool ledState;

    void writePin(bool pinState);

public:
    Led(int pin);
    virtual ~Led();
    void On();
    void Off();
    void Toggle();
};

#endif /* __LED_H__ */