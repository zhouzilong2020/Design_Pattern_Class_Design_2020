//
// Created by  周子龙 on 2020/11/15.
//

#ifndef DESIGNPATTERN_MORNINGSTATE_H
#define DESIGNPATTERN_MORNINGSTATE_H

#include "../IFacility.h"
#include "IState.h"
#include <iostream>

class MorningState : public IState {
protected:
    IFacility *_facility;

public:
    MorningState(IFacility &facility) : _facility(&facility) {}

    virtual void prepareFacility() {
        std::cout << "MorningState::";
        this->_facility->prepareFacility();
    }

    virtual void holdCompetition() {
        std::cout << "MorningState::";
        this->_facility->holdCompetition();
    }

    virtual void holdCeremony() {
        std::cout << "MorningState::";
        this->_facility->holdCeremony();
    }

    virtual void cleanFacility() {
        std::cout << "MorningState::";
        this->_facility->cleanFacility();
    }

    virtual void nextState() {
        std::cout << "Changing State To Afternoon" << std::endl;
        this->_facility->setState(this->_facility->_afterNoonState);
    }
};


#endif //DESIGNPATTERN_MORNINGSTATE_H
