#ifndef I_SWIMMINGPOOL
#define I_SWIMMINGPOOL

#include "IFacility.h"
#include "../Component/IComponent.h"
#include <iostream>


class ISwimmingpool : public IFacility {
protected:
    ISwimmingpool(int size, int capacity)
            : IFacility(size, capacity) {};
    IComponent *seat;

public:
    virtual void prepareFacility() override {
        getWater();
        neutualize();
    }

    virtual void holdCompetition() override {
        std::cout << "Swimmingpool::holdCompetition()" << std::endl;
    };

    virtual void holdCeremony() override {
        std::cout << " Swimmingpool::holdCeremony()" << std::endl;
    };

    virtual void cleanFacility() override {
        neutualize();
    };

    virtual void getWater() = 0;

    virtual void neutualize() = 0;
};

#endif