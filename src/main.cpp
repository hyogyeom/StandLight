#include <iostream>
#include "Listener.h"
#include <wiringPi.h>
#include "Controller.h"
#include "View.h"
#include "Button.h"
#include "Led.h"


int main()
{
    std::cout << "Hello World "<< std::endl;
   
    Button Button1(27);
    Led led1(21);  //제일 왼쪽
    Led led2(22);
    Led led3(23);
    Led led4(24);
    Led led5(25);
    
    View view(&led1, &led2, &led3, &led4, &led5);
    Controller Control(&view);
    Listener listener(&Button1,&Control);


    while(1)
    {
        listener.checkEvent();
        view.lightView();
        delay(50);
    }

    return 0;

}