//
// Created by  周子龙 on 2020/11/24.
//

#include <iostream>

#include "Component/Seat/SlatSeat.h"
#include "Component/Screen/HRScreen.h"
#include "Factory/Builder/IBuilder.h"
#include "Factory/SwimmingPoolFactory.h"
#include "Factory/Builder/SwimmingPoolBuilder.h"

namespace facility {
    void run() {
        IFacility *facility;
        IBuilder *builder = new SwimmingPoolBuilder(SlatSeat::_slatSeat, HRScreen::_HRScreen);
        IFactory *factory = new SwimmingPoolFactory(*builder);
        factory->buildFacility();

        facility = factory->getFacility();


        facility->hostGame();

        facility->setWinterState();
        facility->hostGame();


    }
}