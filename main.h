//
// Created by kvitadmin on 20.08.2021.
//

#ifndef HOMEWORK21_5_2_MAIN_H
#define HOMEWORK21_5_2_MAIN_H
#include <iostream>
#include <vector>
#include <string>

enum roomtype{
    BEDROOM = 0,
    KITCHEN,
    BATHROOM,
    CHILDREN,
    LIVING
};
std::string roomType[5] = {"Bedroom", "Kitchen", "Bathroom", "Children's room", "Living room"};
enum build_type{
    GARAGE = 0,
    SHED,
    SAUNA
};
std::string buildType[3] = {"Garage", "Shed", "Sauna"};
struct room{
    int area;
    roomtype room_type;
};
struct floor{
    std::vector<room> roomInFloor;
    int height;
};
struct house{
    int furnace;
    std::vector<floor> floorInHouse;
    int area;
};
struct build{
    build_type type;
    int area;
    int furnace;
};
struct region{
    std::vector<house> houseInRegion;
    std::vector<build> buildInRegion;
    int number;
};
#endif //HOMEWORK21_5_2_MAIN_H
