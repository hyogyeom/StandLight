#include <iostream>
#include <wiringPi.h>
#include <Button.h>


Button::Button(int pin)
{
    pinNum = pin;
    prevState= RELEASED;
    wiringPiSetup();
    pinMode(pinNum, INPUT);
}

Button::~Button() {}

int Button::getState()
{
   int curState = digitalRead(pinNum);

    if (curState == PUSHED && prevState == RELEASED) {
        prevState = PUSHED;
        return PUSH_ACTIVE;
    }
    else if(curState == RELEASED && prevState == PUSHED) {
        prevState = RELEASED;
        return RELEASE_ACTIVE;
    }
    return NO_ACTIVE; 
}