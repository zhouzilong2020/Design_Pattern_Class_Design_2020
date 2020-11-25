//
// Created by  周子龙 on 2020/11/24.
//

#include"ServiceLocator.h"
#include"Service/IService.h"
#include"BusinessDelegate.h"
#include"FrontController.h"

namespace network {

    void run() {
        FrontController *frontController = new FrontController();
        frontController->dispatchRequest("FiveGService");
        frontController->dispatchRequest("FourGService");
    }

}