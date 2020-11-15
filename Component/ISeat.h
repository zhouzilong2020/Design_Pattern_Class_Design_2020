#ifndef I_SEAT
#define I_SEAT

#include "config/ComponentType.h"
#include "IComponent.h"
#include "config/SeatType.h"
#include <string>
#include <iostream>

class ISeat : public IComponent {


protected:

    int _id;
    SeatType _seatType;

    ISeat(SeatType seatType, int id) : IComponent(ComponentType::Seat), _seatType(seatType), _id(id) {};

public:
    virtual void showInfo() override {
        std::cout << "ComponentType:" << this->_componentType << " Style:" << this->_seatType << " No." << this->_id
                  << std::endl;
    };

    virtual void doSomething() override {
        seat();
    };

    virtual void seat() = 0;

};

#endif