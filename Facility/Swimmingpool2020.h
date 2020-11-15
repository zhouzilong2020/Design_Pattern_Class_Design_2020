#ifndef SWIMMINGPOOL_2020
#define SWIMMINGPOOL_2020

#include "ISwimmingpool.h"
#include <iostream>

class Swimmingpool2020 : public ISwimmingpool {

public:
    Swimmingpool2020(int size, int capacity)
            : ISwimmingpool(size, capacity) {};

    virtual void getWater() override {
        std::cout << "Swimmingpool2020::getWater()" << std::endl;
    };

    virtual void neutualize() override {
        std::cout << "Swimmingpool2020::neutualize()" << std::endl;
    };

};

#endif