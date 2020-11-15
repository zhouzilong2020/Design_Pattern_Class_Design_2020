#ifndef FOLD_SEAT
#define FOLD_SEAT

#include "../IComponent.h"
#include "../ISeat.h"
#include <iostream>

class FoldSeat : public ISeat {
private:
    FoldSeat() : ISeat(SeatType::FoldSeat, _foldSeatCnt) {}

    static int _foldSeatCnt;

protected:
    FoldSeat(int id) : ISeat(SeatType::FoldSeat, id) {};

public:
    static FoldSeat _foldSeat;

    virtual ISeat *clone() override { return new FoldSeat(_foldSeatCnt++); };

    virtual void seat() override {
        showInfo();
        std::cout << "FoldSeat seated" << std::endl;
    }
};

int FoldSeat::_foldSeatCnt = 0;

class ::FoldSeat FoldSeat::_foldSeat;

#endif