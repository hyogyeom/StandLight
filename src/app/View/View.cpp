#include "View.h"
#include <wiringPi.h>
#include <iostream>

View::View(Led *led1,Led *led2,Led *led3,Led *led4,Led *led5)
{
    light1 = led1;
    light2 = led2;
    light3 = led3;
    light4 = led4;
    light5 = led5;
    lightState = LIGHT_OFF;
}

View::~View()
{

}

void View::updateState(std::string strState)
{
    switch (lightState)
    {
        case LIGHT_OFF:
            if (strState == "State_led1_on") 
            {
                lightState = LIGHT_1_ON;
            }
        break;
        case LIGHT_1_ON:
            if (strState == "State_led2_on") 
            {
                lightState = LIGHT_2_ON;
            }
        break;
        case LIGHT_2_ON:
            if (strState == "State_led3_on") 
            {

                lightState = LIGHT_3_ON;
            }
        break;
        case LIGHT_3_ON:
            if (strState == "State_led4_on") 
            {

                lightState = LIGHT_4_ON;
            }
        break;
        case LIGHT_4_ON:
            if (strState == "State_led5_on") 
            {

                lightState = LIGHT_5_ON;
            }
            break;
        case LIGHT_5_ON:
            if (strState == "State_led_off") 
            {
                lightState = LIGHT_OFF;
            }
            break;
    }
}


void View::lightView()
{
     switch(lightState)
    {
        case LIGHT_OFF:
        lightOff();
        break;
        case LIGHT_1_ON:
        lightOn();
        break;
        case LIGHT_2_ON:
        lightOn();
        break;
        case LIGHT_3_ON:
        lightOn();
        break;
        case LIGHT_4_ON:
        lightOn();
        break;
        case LIGHT_5_ON:
        lightOn();
        break;
    }
}

void View::lightOn()
{
    if(lightState == 1) light1->On();
    if(lightState == 2) light2->On();
    if(lightState == 3) light3->On();
    if(lightState == 4) light4->On();
    if(lightState == 5) light5->On();
}

void View::lightOff()
{
    light1->Off();
    light2->Off();
    light3->Off();
    light4->Off();
    light5->Off();
}

