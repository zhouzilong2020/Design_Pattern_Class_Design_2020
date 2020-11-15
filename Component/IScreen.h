//
// Created by  周子龙 on 2020/11/15.
//

#ifndef DESIGNPATTERN_ISCREEN_H
#define DESIGNPATTERN_ISCREEN_H

#include "config/ScreenType.h"
#include "config/ComponentType.h"
#include "IComponent.h"
#include <iostream>

class IScreen : public IComponent {

protected:
    ScreenType _screenType;

    int _id;

    IScreen(ScreenType screenType, int id) : IComponent(ComponentType::Screen), _screenType(screenType), _id(id) {};

public:

    virtual void showInfo() {
        std::cout << "ComponentType:" << this->_componentType << " Style:" << this->_screenType << " No." << this->_id
                  << std::endl
    };

    virtual void doSomething() {
        display();
    };

    virtual void display() = 0;
};

#endif //DESIGNPATTERN_ISCREEN_H
