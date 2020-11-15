//
// Created by  周子龙 on 2020/11/15.
//

#ifndef DESIGNPATTERN_SWIMMINGPOOLFACTORY_H
#define DESIGNPATTERN_SWIMMINGPOOLFACTORY_H

#include "IFactory.h"
#include "../Component/Seat/FoldSeat.h"
#include "../Component/Screen/HRScreen.h"

class SwimmingPoolFactory : public IFactory {
private:

public:
    SwimmingPoolFactory(IFacility &facility, IBuilder &builder) : IFactory(facility, builder) {}

    void buildFacility() {
        this->_builder->construct(*this->_facility);
        this->_builder->installSeat(*this->_facility);
        this->_builder->installScreen(*this->_facility);
    }
};


#endif //DESIGNPATTERN_SWIMMINGPOOLFACTORY_H
