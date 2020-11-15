//
// Created by  周子龙 on 2020/11/15.
//

#ifndef DESIGNPATTERN_WINTERSTATE_H
#define DESIGNPATTERN_WINTERSTATE_H

#include "IState.h"
#include <iostream>

class IFacility;

class WinterState : public IState {

public:
    WinterState(IFacility &facility);

    virtual void prepareFacility();

    virtual void holdCompetition();

    virtual void holdCeremony();

    virtual void cleanFacility();
};


#endif //DESIGNPATTERN_WINTERSTATE_H
