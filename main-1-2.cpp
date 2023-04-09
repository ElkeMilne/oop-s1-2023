#include <iostream>
#include <vector>
#include "Vehicle.h"

class ParkingLot {
private:
    int maxCapacity;
    int count;
    std::vector<Vehicle*> vehicles;

public:
    ParkingLot(int maxCapacity) : maxCapacity(maxCapacity), count(0), vehicles(maxCapacity) {}

    ~ParkingLot() {
        for (auto vehicle : vehicles) {
            delete vehicle;
        }
    }

    int getCount() const {
        return count;
    }

    void parkVehicle(Vehicle* vehicle) {
        if (count < maxCapacity) {
            vehicles[count] = vehicle;
            count++;
            std::cout << "Vehicle parked successfully\n";
        } else {
            std::cout << "The lot is full\n";
        }
    }

    void unparkVehicle(int id) {
        auto it = std::find_if(vehicles.begin(), vehicles.end(),
            [id](Vehicle* vehicle) { return vehicle->getId() == id; });

        if (it == vehicles.end()) {
            std::cout << "Vehicle not in the lot\n";
        } else {
            delete *it;
            vehicles.erase(it);
            count--;
            std::cout << "Vehicle unparked successfully\n";
        }
    }
};
