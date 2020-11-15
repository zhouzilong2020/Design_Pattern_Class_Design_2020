//
// Created by  周子龙 on 2020/11/15.
//

#ifndef DESIGNPATTERN_EVENINGSTATE_H
#define DESIGNPATTERN_EVENINGSTATE_H

#include "../IFacility.h"
#include "IState.h"
#include <iostream>


class EveningState : public IState {
protected:
    IFacility *_facility;

public:
    EveningState(IFacility &facility) : _facility(&facility) {};

    virtual void prepareFacility() {
        std::cout << "EveningState::";
        this->_facility->prepareFacility();
    }

    virtual void holdCompetition() {
        std::cout << "EveningState::";
        this->_facility->holdCompetition();
    }

    virtual void holdCeremony() {
        std::cout << "EveningState::";
        this->_facility->holdCeremony();
    }

    virtual void cleanFacility() {
        std::cout << "EveningState::";
        this->_facility->cleanFacility();


    }

    virtual void nextState() {
        std::cout << "Changing State To Morning" << std::endl;
        this->_facility->setState(this->_facility->_morningState);

    }
};


#endif //DESIGNPATTERN_EVENINGSTATE_H
