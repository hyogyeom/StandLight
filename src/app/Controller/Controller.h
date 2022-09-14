#ifndef __CONTROLLER_H__
#define __CONTROLLER_H__

#include <string>
#include "View.h"

class Controller
{
private:
    int lightState;
    View *view;

public:
    Controller(View *viewer);
    virtual ~Controller();
    void updateEvent(std::string strBtn);
};

#endif /* __CONTROLLER_H__ */