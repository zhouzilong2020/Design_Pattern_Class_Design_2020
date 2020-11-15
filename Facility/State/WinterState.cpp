//
// Created by  周子龙 on 2020/11/15.
//

//
// Created by  周子龙 on 2020/11/15.
//
#include "WinterState.h"
#include "../IFacility.h"

WinterState::WinterState(IFacility &facility) : IState(facility) {}

void WinterState::prepareFacility() {
    std::cout << "WinterState::setting A/C to 28 degree" << std::endl;
    this->_facility->prepareFacility();
}

void WinterState::holdCompetition() {
    std::cout << "WinterState::";
    this->_facility->holdCompetition();
}

void WinterState::holdCeremony() {
    std::cout << "WinterState::";
    this->_facility->holdCeremony();
}

void WinterState::cleanFacility() {
    std::cout << "SummerState::";
    this->_facility->cleanFacility();
}
