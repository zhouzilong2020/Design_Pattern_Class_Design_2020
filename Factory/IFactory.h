//
// Created by  周子龙 on 2020/11/15.
//

#ifndef DESIGNPATTERN_IFACTORY_H
#define DESIGNPATTERN_IFACTORY_H

#include "../Facility/IFacility.h"
#include "Builder/IBuilder.h"

class IFactory {
protected:
    IFacility *_facility;
    IBuilder *_builder;

    IFactory(IFacility &facility, IBuilder &builder) : _facility(&facility), _builder(&builder) {}

public:
    virtual void buildFacility() = 0;

    virtual IFacility *getFacility() { return this->_facility; };
};


#endif //DESIGNPATTERN_IFACTORY_H
