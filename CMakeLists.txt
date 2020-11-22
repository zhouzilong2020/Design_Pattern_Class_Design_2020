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

add_executable(DesignPattern main.cpp ${SOURCE_FILES} ${SOURCES} Facility/State/IState.h Facility/State/WinterState.h Facility/State/SummerState.h Facility/IFacility.h
        Factory/IFactory.h Factory/Builder/IBuilder.h Component/config/ScreenType.h Component/Screen/HRScreen.h Component/Screen/RetinaScreen.h Component/IScreen.h  Factory/SwimmingPoolFactory.h Factory/Builder/SwimmingPoolBuilder.h Facility/State/IState.cpp Facility/IFacility.cpp Facility/State/SummerState.cpp Facility/State/WinterState.cpp PoolObject/IPoolObject.h PoolObject/Dish.h PoolObject/Spoon.h PoolObject/PoolProxy.h PoolManager/PoolManager.h  PoolObject/PoolProxy.cpp)