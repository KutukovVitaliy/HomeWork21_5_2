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
std::string Room_Type[5] = {"Bedroom", "Kitchen", "Bathroom", "Children's room", "Living room"};
enum build_type{
    GARAGE = 0,
    SHED,
    SAUNA
};
std::string Build_Type[3] = {"Garage", "Shed", "Sauna"};
struct room{
    int Area;
    roomtype RoomType;
};
struct floor{
    std::vector<room> Room;
    int Height;
};
struct house{
    int furnace;
    std::vector<floor> Floor;
    int area;
};
struct build{
    build_type BuildType;
    int area;
    int furnace;
};
struct region{
    std::vector<house> House;
    std::vector<build> Build;
    int Number;
};
#endif //HOMEWORK21_5_2_MAIN_H
