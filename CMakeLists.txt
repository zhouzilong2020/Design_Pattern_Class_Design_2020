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

add_executable(DesignPattern main.cpp ${SOURCE_FILES} ${SOURCES} Facility/State/IState.h Facility/State/MorningState.h Facility/State/AfterNoonState.h Facility/State/EveningState.h Facility/IFacility.h a/CA.h Factory/IFactory.h Factory/Builder/IBuilder.h Component/config/ScreenType.h Component/Screen/HRScreen.h Component/Screen/RetinaScreen.h Component/IScreen.h)