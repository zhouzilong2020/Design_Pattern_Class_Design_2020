//
// Created by  周子龙 on 2020/11/15.
//

#ifndef DESIGNPATTERN_ISTATE_H
#define DESIGNPATTERN_ISTATE_H

class IState {
public:
    virtual void prepareFacility() = 0;

    virtual void holdCompetition() = 0;

    virtual void holdCeremony() = 0;

    virtual void cleanFacility() = 0;

    virtual void nextState() = 0;
};


#endif //DESIGNPATTERN_ISTATE_H
