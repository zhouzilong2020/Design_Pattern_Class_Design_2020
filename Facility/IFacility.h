#ifndef DESIGNPATTERN_IFACILITY_H
#define DESIGNPATTERN_IFACILITY_H
//
#include "State/IState.h"

class IFacility {

protected:
    IFacility(int size, int capacity) : _size(size), _capacity(capacity) {}

    int _size;
    int _capacity;
    IState *_state;

public:
    IState *_morningState;
    IState *_afterNoonState;
    IState *_eveningState;

    virtual void hostGame() {
        this->_state->prepareFacility();
        this->_state->holdCompetition();
        this->_state->holdCeremony();
        this->_state->cleanFacility();
        this->_state->nextState();
    };

    virtual void prepareFacility() = 0;

    virtual void holdCompetition() = 0;

    virtual void holdCeremony() = 0;

    virtual void cleanFacility() = 0;

    void setState(IState *newState) { _state = newState; };

    IState *getState() { return _state; };
};

#endif