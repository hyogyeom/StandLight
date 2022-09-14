#include "Led.h"
#include "wiringPi.h"

Led::Led(int pin)
    : pinNumber(pin), ledState(OFF)
{
    wiringPiSetup();
    pinMode(pinNumber, OUTPUT);
}

Led::~Led()
{
}

void Led::writePin(bool pinState)
{
    digitalWrite(pinNumber, (int)pinState);
}

void Led::On()
{
    ledState = ON;
    writePin(ledState);
}

void Led::Off()
{
    ledState = OFF;
    writePin(ledState);
}
void Led::Toggle()
{
    ledState ^= 1;
    writePin(ledState);
}