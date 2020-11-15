#ifndef SWIMMINGPOOL_2020
#define SWIMMINGPOOL_2020

#include "ISwimmingPool.h"
#include <iostream>

class SwimmingPool2020 : public ISwimmingPool {

public:
    SwimmingPool2020(int size, int capacity)
            : ISwimmingPool(size, capacity) {};

    virtual void getWater() override {
        std::cout << "SwimmingPool2020::getWater()" << std::endl;
    };

    virtual void neutralize() override {
        std::cout << "SwimmingPool2020::neutralize()" << std::endl;
    };

};

#endif