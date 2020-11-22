#include <iostream>

//#include "Component/Seat/SlatSeat.h"
//#include "Component/Screen/HRScreen.h"
//#include "Factory/Builder/IBuilder.h"
//#include "Facility/IFacility.h"
//#include "Factory/SwimmingPoolFactory.h"
//#include "Factory/Builder/SwimmingPoolBuilder.h"

#include "PoolManager/PoolManager.h"
#include "PoolObject/Dish.h"
#include "PoolObject/Spoon.h"

using namespace std;

int main() {
//
//    IFacility *facility;
//    IBuilder *builder = new SwimmingPoolBuilder(SlatSeat::_slatSeat, HRScreen::_HRScreen);
//    IFactory *factory = new SwimmingPoolFactory(*builder);
//    factory->buildFacility();
//
//    facility = factory->getFacility();
//
//
//    facility->hostGame();
//
//    facility->setWinterState();
//    facility->hostGame();

    PoolManager *dishManager = new PoolManager(2, &Dish::_Dish);

    PoolProxy *dish1 = dishManager->request();
    dish1->execute();

    PoolProxy *dish2 = dishManager->request();
    dish2->execute();

    dishManager->request();

}
