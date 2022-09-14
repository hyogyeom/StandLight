#include "Listener.h"
#include <iostream>

Listener::Listener(Button *button, Controller *control)
{
    powerButton = button;
    controller = control;
}

Listener::~Listener()
{
}

void Listener::checkEvent()
{
    if (powerButton->getState() == RELEASE_ACTIVE)
        {
            controller->updateEvent("powerButton");
        }
}