//
// Created by  周子龙 on 2020/11/15.
//

#ifndef DESIGNPATTERN_CA_H
#define DESIGNPATTERN_CA_H

#include <iostream>

using namespace std;

class A {
public:
    virtual void func() = 0;
};

class B : public A {

public:
    virtual void func() {
        cout << "B::" << endl;
        otherThing();
    };

    virtual void otherThing() = 0;

};

class C : public B {
public:
    virtual void otherThing() {
        cout << "C::" << endl;
    };
};


#endif //DESIGNPATTERN_CA_H
