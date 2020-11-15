#ifndef SLAT_SEAT
#define SLAT_SEAT

#include "../IComponent.h"
#include "../ISeat.h"
#include "../config/SeatType.h"
#include <iostream>

class SlatSeat : public ISeat {
private:
    SlatSeat() : ISeat(SeatType::SlatSeat, _slatSeatCnt++) {}

    static int _slatSeatCnt;

protected:
    SlatSeat(int id) : ISeat(SeatType::SlatSeat, id) {}

public:
    static SlatSeat _slatSeat;

    virtual ISeat *clone() override { return new SlatSeat(SlatSeat::_slatSeatCnt++); }

    virtual void seat() override {
        showInfo();
        std::cout << "SlatSeat seated" << std::endl;
    }
};

int SlatSeat::_slatSeatCnt = 0;

class ::SlatSeat SlatSeat::_slatSeat;

#endif