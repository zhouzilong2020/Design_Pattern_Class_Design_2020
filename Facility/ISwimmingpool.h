#ifndef I_SWIMMINGPOOL
#define I_SWIMMINGPOOL

#include "IFacility.h"
#include "../Component/IComponent.h"
#include <iostream>


class ISwimmingPool : public IFacility {
protected:
    ISwimmingPool(int size, int capacity)
            : IFacility(size, capacity) {};
public:
    virtual void prepareFacility() override {
        std::cout << "SwimmingPool::prepareFacility()" << std::endl;
        std::cout << "SwimmingPool::prepareFacility::";
        getWater();
        std::cout << "SwimmingPool::prepareFacility::";
        neutralize();
    }

    virtual void holdCompetition() override {
        std::cout << "SwimmingPool::holdCompetition()" << std::endl;
    };

    virtual void holdCeremony() override {
        std::cout << "SwimmingPool::holdCeremony()" << std::endl;
    };

    virtual void cleanFacility() override {
        neutralize();
    };

    virtual void getWater() = 0;

    virtual void neutralize() = 0;
};

#endif