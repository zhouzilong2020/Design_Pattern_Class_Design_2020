//
// Created by  周子龙 on 2020/11/15.
//

#ifndef DESIGNPATTERN_SWIMMINGPOOLBUILDER_H
#define DESIGNPATTERN_SWIMMINGPOOLBUILDER_H

#include "IBuilder.h"

#include <iostream>

class SwimmingPoolBuilder : public IBuilder {

public:
    SwimmingPoolBuilder(IComponent &seat, IComponent &screen) : IBuilder(seat, screen) {}


    virtual void construct(IFacility &facility) override {
        std::cout << "Constructing SwimmingPool" << std::endl;
    };

    virtual void installSeat(IFacility &facility) override {
        std::cout << "Installing Seats" << std::endl;
        for (int i = 0, cnt = facility.getCapacity(); i < cnt; i++) {
            facility.addSeat(*this->_seat->clone());
        }
    };

    virtual void installScreen(IFacility &facility) override {
        std::cout << "Installing Screen" << std::endl;
        facility.addScreen(*this->_screen->clone());
    };
};

#endif //DESIGNPATTERN_SWIMMINGPOOLBUILDER_H
