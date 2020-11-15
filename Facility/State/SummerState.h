//
// Created by  周子龙 on 2020/11/15.
//

#ifndef DESIGNPATTERN_SUMMERSTATE_H
#define DESIGNPATTERN_SUMMERSTATE_H

#include "IState.h"
#include <iostream>

class IFacility;

class SummerState : public IState {
public:
    SummerState(IFacility &facility);

    virtual void prepareFacility();

    virtual void holdCompetition();

    virtual void holdCeremony();

    virtual void cleanFacility();
};


#endif //DESIGNPATTERN_SUMMERSTATE_H
