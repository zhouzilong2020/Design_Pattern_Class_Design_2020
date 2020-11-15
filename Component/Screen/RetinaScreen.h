//
// Created by  周子龙 on 2020/11/15.
//

#ifndef DESIGNPATTERN_RETINASCREEN_H
#define DESIGNPATTERN_RETINASCREEN_H

#include "../IScreen.h"
#include "../config/ScreenType.h"

class RetinaScreen : public IScreen {
private:
    RetinaScreen() : IScreen(ScreenType::RetinaScreen, _retinaScreenCnt) {}

    static int _retinaScreenCnt;

protected:
    RetinaScreen(int id) : IScreen(ScreenType::RetinaScreen, id) {};

public:
    static RetinaScreen _retinaScreen;

    virtual IScreen *clone() override { return new RetinaScreen(_retinaScreenCnt++); };

    virtual void display() override {
        showInfo();
        std::cout << "RetinaScreen Initiated" << std::endl;
    }
};

int RetinaScreen::_retinaScreenCnt = 0;

class ::RetinaScreen RetinaScreen::_retinaScreen;


#endif //DESIGNPATTERN_RETINASCREEN_H
