#include "Controller.h"
#include <iostream>

Controller::Controller(View *viewer)
{
    view = viewer;
    lightState = LIGHT_OFF;
}

Controller::~Controller()
{
}

void Controller::updateEvent(std::string strBtn)
{
    switch (lightState)
    {
    case LIGHT_OFF:
        if (strBtn == "powerButton")
        {
            lightState = LIGHT_1_ON;
            view->updateState("State_led1_on");
        }
        break;

    case LIGHT_1_ON:
        if(strBtn == "powerButton")
        {
            lightState = LIGHT_2_ON;
            view->updateState("State_led2_on");
        }
        break;

    case LIGHT_2_ON:
        if(strBtn == "powerButton")
        {
            lightState = LIGHT_3_ON;
            view->updateState("State_led3_on");
        }
        break;

    case LIGHT_3_ON:
        if(strBtn == "powerButton")
        {
            lightState = LIGHT_4_ON;
            view->updateState("State_led4_on");
        }
        break;

    case LIGHT_4_ON:
        if(strBtn == "powerButton")
        {
            lightState = LIGHT_5_ON;
            view->updateState("State_led5_on");
        }
        break;


    case LIGHT_5_ON:
        if(strBtn == "powerButton")
        {
            lightState = LIGHT_OFF;
            view->updateState("State_led_off");
        }
        break;



    }
}