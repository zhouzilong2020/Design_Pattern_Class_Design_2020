//
// Created by  周子龙 on 2020/11/15.
//

#ifndef DESIGNPATTERN_HRSCREEN_H
#define DESIGNPATTERN_HRSCREEN_H

#include "../IScreen.h"
#include "../config/ScreenType.h"

class HRScreen : public IScreen {
private:
    HRScreen() : IScreen(ScreenType::RetinaScreen, _HRScreenCnt) {}

    static int _HRScreenCnt;

protected:
    HRScreen(int id) : IScreen(ScreenType::RetinaScreen, id) {};

public:
    static HRScreen _HRScreen;

    virtual IScreen *clone() override { return new HRScreen(_HRScreenCnt++); };

    virtual void display() override {
        showInfo();
        std::cout << "HRScreen Initiated" << std::endl;
    }
};

int HRScreen::_HRScreenCnt = 0;

class ::HRScreen HRScreen::_HRScreen;


#endif //DESIGNPATTERN_HRSCREEN_H
