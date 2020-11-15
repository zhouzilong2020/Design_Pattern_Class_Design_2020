//
// Created by  周子龙 on 2020/11/15.
//

#include "State/IState.h"
#include "State/WinterState.h"
#include "State/SummerState.h"

#include "IFacility.h"

IFacility::IFacility(int size, int capacity) : _size(size), _capacity(capacity) {
    this->_summerState = new SummerState(*this);
    this->_winterState = new WinterState(*this);
    this->_curState = this->_summerState;
}

/**
 *
 */
void IFacility::hostGame() {
    this->_curState->prepareFacility();
    this->_curState->holdCompetition();
    this->_curState->holdCeremony();
    this->_curState->cleanFacility();
}