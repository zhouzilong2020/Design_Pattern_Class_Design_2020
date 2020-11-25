//
// Created by  周子龙 on 2020/11/24.
//

#include "PoolManager/PoolManager.h"
#include "PoolObject/Dish.h"
#include "PoolObject/Spoon.h"

namespace cafeteria {

    void run() {
        PoolManager *dishManager = new PoolManager(2, &Dish::_Dish);

        PoolProxy *dish1 = dishManager->request();
        dish1->execute();

        PoolProxy *dish2 = dishManager->request();
        dish2->execute();

        dishManager->request();
    }

}
