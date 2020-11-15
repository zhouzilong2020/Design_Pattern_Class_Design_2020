//
// Created by  周子龙 on 2020/11/15.
//

#include "../IFacility.h"
#include "IState.h"

IState::IState(IFacility &facility) : _facility(&facility) {}