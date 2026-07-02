#include <iostream>
#include <string>

class Building {
private:
    int totalRooms;
    std::string securityCode;

    // Grant friendship to BuildingManager
    friend class BuildingManager;

public:
    Building(int rooms, std::string code) : totalRooms(rooms), securityCode(code) {}
};

class BuildingManager {
public:
    void upgradeSecurity(Building &b, std::string newCode) {
        // BuildingManager can access private members of Building
        b.securityCode = newCode;
        std::cout << "Security code updated to: " << b.securityCode << std::endl;
    }

    void addRooms(Building &b, int extra) {
        b.totalRooms += extra;
        std::cout << "Total rooms now: " << b.totalRooms << std::endl;
    }
};

int main() {
    Building myBuilding(10, "1234");
    BuildingManager admin;

    admin.addRooms(myBuilding, 5);
    admin.upgradeSecurity(myBuilding, "9876");

    return 0;
}