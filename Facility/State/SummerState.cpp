//
// Created by  周子龙 on 2020/11/15.
//
#include "SummerState.h"
#include "../IFacility.h"


SummerState::SummerState(IFacility &facility) : IState(facility) {};

void SummerState::prepareFacility() {
    std::cout << "SummerState::setting A/C to 26 degree" << std::endl;
    this->_facility->prepareFacility();
}

void SummerState::holdCompetition() {
    std::cout << "SummerState::";
    this->_facility->holdCompetition();
}

void SummerState::holdCeremony() {
    std::cout << "SummerState::";
    this->_facility->holdCeremony();
}

void SummerState::cleanFacility() {
    std::cout << "SummerState::";
    this->_facility->cleanFacility();
}