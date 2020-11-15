//
// Created by  周子龙 on 2020/11/15.
//

#ifndef DESIGNPATTERN_AFTERNOONSTATE_H
#define DESIGNPATTERN_AFTERNOONSTATE_H


#include "../IFacility.h"
#include "IState.h"
#include <iostream>


class AfterNoonState : public IState {
protected:
    IFacility *_facility;

public:
    AfterNoonState(IFacility &facility) : _facility(&facility) {};

    virtual void prepareFacility() {
        std::cout << "AfterNoonState::";
        this->_facility->prepareFacility();
    }

    virtual void holdCompetition() {
        std::cout << "AfterNoonState::";
        this->_facility->holdCompetition();
    }

    virtual void holdCeremony() {
        std::cout << "AfterNoonState::";
        this->_facility->holdCeremony();
    }

    virtual void cleanFacility() {
        std::cout << "AfterNoonState::";
        this->_facility->cleanFacility();


    }

    virtual void nextState() {
        std::cout << "Changing State To Evening" << std::endl;
        this->_facility->setState(this->_facility->_eveningState);

    }
};


#endif //DESIGNPATTERN_AFTERNOONSTATE_H
