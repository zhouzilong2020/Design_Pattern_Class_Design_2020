cmake_minimum_required(VERSION 3.17)
project(DesignPattern)

set(CMAKE_CXX_STANDARD 11)
#
#file(GLOB SOURCES
#        Component/ComponentType.h
#        Component/FoldSeat.h
#        Component/IComponent.h
#        Component/ISeat.h
#        Component/SeatType.h
#        Component/SlatSeat.h
#        )

add_executable(DesignPattern main.cpp ${SOURCE_FILES} ${SOURCES} State_Factory_Template_Builder_Prototype/Facility/State/IState.h State_Factory_Template_Builder_Prototype/Facility/State/WinterState.h State_Factory_Template_Builder_Prototype/Facility/State/SummerState.h State_Factory_Template_Builder_Prototype/Facility/IFacility.h
        State_Factory_Template_Builder_Prototype/Factory/IFactory.h State_Factory_Template_Builder_Prototype/Factory/Builder/IBuilder.h State_Factory_Template_Builder_Prototype/Component/config/ScreenType.h State_Factory_Template_Builder_Prototype/Component/Screen/HRScreen.h State_Factory_Template_Builder_Prototype/Component/Screen/RetinaScreen.h State_Factory_Template_Builder_Prototype/Component/IScreen.h State_Factory_Template_Builder_Prototype/Factory/SwimmingPoolFactory.h State_Factory_Template_Builder_Prototype/Factory/Builder/SwimmingPoolBuilder.h State_Factory_Template_Builder_Prototype/Facility/State/IState.cpp State_Factory_Template_Builder_Prototype/Facility/IFacility.cpp State_Factory_Template_Builder_Prototype/Facility/State/SummerState.cpp State_Factory_Template_Builder_Prototype/Facility/State/WinterState.cpp Pool_Proxy/PoolObject/IPoolObject.h Pool_Proxy/PoolObject/Dish.h Pool_Proxy/PoolObject/Spoon.h Pool_Proxy/PoolObject/PoolProxy.h Pool_Proxy/PoolManager/PoolManager.h Pool_Proxy/PoolObject/PoolProxy.cpp ServiceLocator/Service/IService.h ServiceLocator/ServiceLocator.h ServiceLocator/Service/FourGService.h ServiceLocator/Service/FiveGService.h ServiceLocator/Cache.h ServiceLocator/InitialContext.h Pool_Proxy/cafeteria.h ServiceLocator/network.h State_Factory_Template_Builder_Prototype/facility.h)