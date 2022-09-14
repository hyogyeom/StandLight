#ifndef __BUTTON_H_
#define __BUTTON_H_


enum {NO_ACTIVE, PUSH_ACTIVE, RELEASE_ACTIVE};

class Button
{
private:
    const int PUSHED = 0;
    const int RELEASED = 1;
    int prevState;
    int pinNum;

public:
    Button(int pin);
    ~Button();
    int getState();
};
#endif