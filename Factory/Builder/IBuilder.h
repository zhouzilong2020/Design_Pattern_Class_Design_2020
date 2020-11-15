//
// Created by  周子龙 on 2020/11/15.
//

#ifndef DESIGNPATTERN_IBUILDER_H
#define DESIGNPATTERN_IBUILDER_H

#include "../../Component/IComponent.h"
#include "../../Facility/IFacility.h"

class IBuilder {
private:
    IFacility *_facility;
public:
    virtual void buildOutline() = 0;

    virtual void buildSeat() = 0;

    virtual IFacility *getFacility() {
        return this->_facility;
    }
};


#endif //DESIGNPATTERN_IBUILDER_H
