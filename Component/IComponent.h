#ifndef I_COMPONENT
#define I_COMPONENT

#include "config/ComponentType.h"


class IComponent {

protected:
    ComponentType _componentType;


    IComponent(ComponentType componentType) : _componentType(componentType) {};

public:
    virtual void showInfo() = 0;

    virtual void doSomething() = 0;

    virtual IComponent *clone() = 0;
};

#endif