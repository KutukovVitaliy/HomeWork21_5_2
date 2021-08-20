#include "main.h"

int main() {


    int RegionsQuantity, BuildingsQuantity, tmp;
    std::vector<region> Regions;
    region TmpRegion;

    std::cout << "Input quantity of regions: ";
    std::cin >> RegionsQuantity;
    for(int i = 0; i < RegionsQuantity; ++i){
        TmpRegion.Number = i+1;
        std::cout << "Input total quantity of buildings at region number #" << i+1 << ": ";
        std::cin >> BuildingsQuantity;
        for(int j = 0; j < BuildingsQuantity; ++j){
            std::cout << "Input type of build(1 - house, 2 - utility build :";
            std::cin >> tmp;
            if(tmp == 2){
                build TmpBuild;
                std::cout << "Input build area: ";
                std::cin >> TmpBuild.area;
                std::cout << "How many furnace in the build?(0 - if no): ";
                std::cin >> TmpBuild.furnace;
                std::cout << "What's the type of build?(0 - " << Build_Type[0] << " 1 = " << Build_Type[1] << " 2 - "
                    << Build_Type[2] << "): ";
                int temp;
                std::cin >> temp;
                TmpBuild.BuildType = static_cast<build_type>(temp);
                TmpRegion.Build.push_back(TmpBuild);
            }
            else if(tmp == 1){
                house TmpHouse;
                std::cout << "Input house area: ";
                std::cin >> TmpHouse.area;
                std::cout << "How many furnace in the house?(0 - if no): ";
                std::cin >> TmpHouse.furnace;
                int IntFloor;
                std::cout << "How many floor in the house?: ";
                std::cin >> IntFloor;
                floor TmpFloor;
                for(int g = 0; g < IntFloor; ++g){
                    std::cout << "Input the height of floor #" << g+1 << ": ";
                    std::cin >> TmpFloor.Height;
                    int IntRooms;
                    room TmpRoom;
                    std::cout << "Input quantity of room in the floor #" << g+1 << ": ";
                    std::cin >> IntRooms;
                    for(int k = 0; k < IntRooms; ++k){
                        std::cout << "Input the area of room #" << k+1 << ": ";
                        std::cin >> TmpRoom.Area;
                        std::cout << "Input the type of room #" << k+1 << ":(0 - " << Room_Type[0] << " 1 - " <<
                            Room_Type[1] << " 2 - " << Room_Type[2] << " 3 - " << Room_Type[3] <<
                            " 4 - " << Room_Type[4] << " ): ";
                        int temp;
                        std::cin >> temp;
                        TmpRoom.RoomType = static_cast<roomtype>(temp);
                        TmpFloor.Room.push_back(TmpRoom);
                    }
                    TmpHouse.Floor.push_back(TmpFloor);
                }
                TmpRegion.House.push_back(TmpHouse);
            }
        }
        Regions.push_back(TmpRegion);
    }
    return 0;
}
