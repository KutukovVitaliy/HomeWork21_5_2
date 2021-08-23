#include "main.h"

int main() {


    int regionsQuantity, buildingsQuantity, tmp;
    float villageArea, allBuildsArea = 0;
    std::vector<region> regions;
    region tmpRegion;

    std::cout << "Input village area:" ;
    std::cin >> villageArea;
    std::cout << "Input quantity of regions: ";
    std::cin >> regionsQuantity;
    for(int i = 0; i < regionsQuantity; ++i){
        tmpRegion.number = i + 1;
        std::cout << "Input total quantity of buildings at region number #" << i+1 << ": ";
        std::cin >> buildingsQuantity;
        for(int j = 0; j < buildingsQuantity; ++j){
            std::cout << "Input type of build #" << j+1 <<" (1 - house, 2 - utility build) :";
            std::cin >> tmp;
            if(tmp == 2){
                build tmpBuild;
                std::cout << "Input build area: ";
                std::cin >> tmpBuild.area;
                allBuildsArea += tmpBuild.area;
                std::cout << "How many furnace in the build?(0 - if no): ";
                std::cin >> tmpBuild.furnace;
                std::cout << "What's the type of build #" << j + 1 << "?(0 - " << buildType[0] << " 1 = " << buildType[1] << " 2 - "
                          << buildType[2] << "): ";
                int temp;
                std::cin >> temp;
                tmpBuild.type = static_cast<build_type>(temp);
                tmpRegion.buildInRegion.push_back(tmpBuild);
            }
            else if(tmp == 1){
                house tmpHouse;
                std::cout << "Input house area: ";
                std::cin >> tmpHouse.area;
                allBuildsArea += tmpHouse.area;
                std::cout << "How many furnace in the house?(0 - if no): ";
                std::cin >> tmpHouse.furnace;
                int intFloor;
                std::cout << "How many floor in the house?: ";
                std::cin >> intFloor;
                floor tmpFloor;
                for(int g = 0; g < intFloor; ++g){
                    std::cout << "Input the height of floor #" << g+1 << ": ";
                    std::cin >> tmpFloor.height;
                    int intRooms;
                    room tmpRoom;
                    std::cout << "Input quantity of room in the floor #" << g+1 << ": ";
                    std::cin >> intRooms;
                    for(int k = 0; k < intRooms; ++k){
                        std::cout << "Input the area of room #" << k+1 << ": ";
                        std::cin >> tmpRoom.area;
                        std::cout << "Input the type of room #" << k+1 << ":(0 - " << roomType[0] << " 1 - " <<
                                  roomType[1] << " 2 - " << roomType[2] << " 3 - " << roomType[3] <<
                                  " 4 - " << roomType[4] << " ): ";
                        int temp;
                        std::cin >> temp;
                        tmpRoom.room_type = static_cast<roomtype>(temp);
                        tmpFloor.roomInFloor.push_back(tmpRoom);
                    }
                    tmpHouse.floorInHouse.push_back(tmpFloor);
                }
                tmpRegion.houseInRegion.push_back(tmpHouse);
            }
        }
        regions.push_back(tmpRegion);
    }
    std::cout << "The percentage of land occupied by buildings is equal to " << (allBuildsArea / villageArea) * 100 <<
        "/%" << std::endl;
    return 0;
}
