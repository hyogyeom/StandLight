#ifndef __VIEW_H__
#define __VIEW_H__

#include <string>
#include "Led.h"

enum {LIGHT_OFF, LIGHT_1_ON, LIGHT_2_ON, LIGHT_3_ON, LIGHT_4_ON, LIGHT_5_ON};

class View
{
private:
    int lightState;
    Led *light1,*light2,*light3,*light4,*light5;

public:
    View(Led *led1,Led *led2,Led *led3, Led *led4, Led *led5);
    virtual ~View();
    void lightView();
    void updateState(std::string strState);
    void lightOn();
    void lightOff();
};

#endif /* __VIEW_H__ */