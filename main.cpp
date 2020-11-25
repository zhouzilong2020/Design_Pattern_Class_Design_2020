
#include "Pool_Proxy/cafeteria.h"
#include "ServiceLocator/network.h"
#include "State_Factory_Template_Builder_Prototype/facility.h"

int main() {
    cafeteria::run();
    network::run();
   facility::run();
}