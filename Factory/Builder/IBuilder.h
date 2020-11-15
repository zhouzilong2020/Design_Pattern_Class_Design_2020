//
// Created by  周子龙 on 2020/11/15.
//

#ifndef DESIGNPATTERN_IBUILDER_H
#define DESIGNPATTERN_IBUILDER_H

#include "../../Component/IComponent.h"
#include "../../Facility/IFacility.h"

class IBuilder {
protected:
    IComponent *_seat;
    IComponent *_screen;

    IBuilder(IComponent &seat, IComponent &screen) : _seat(&seat), _screen(&screen) {}

public:

    virtual void construct(IFacility &facility) = 0;

    virtual void installSeat(IFacility &facility) = 0;

    virtual void installScreen(IFacility &facility) = 0;
};


#endif //DESIGNPATTERN_IBUILDER_H
