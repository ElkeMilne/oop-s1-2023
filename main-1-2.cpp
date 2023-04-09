#include <iostream>
#include "Vehicle.h" 

class ParkingLot {
private:
    int maxCapacity;
    int count;
    Vehicle** vehicles; 

public:
    ParkingLot(int maxCapacity) : maxCapacity(maxCapacity), count(0) {
        vehicles = new Vehicle*[maxCapacity]; 
    }
    
    ParkingLot::~ParkingLot() {
    for (int i = 0; i < count; i++) {
        delete vehicles[i];
    }
    delete[] vehicles;
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
        int index = -1;
        for (int i = 0; i < count; i++) {
            if (vehicles[i]->getID() == id) {
                index = i;
                break;
            }
        }
        if (index == -1) {
            std::cout << "Vehicle not in the lot\n";
        } else {
            count--;
            for (int i = index; i < count; i++) {
                vehicles[i] = vehicles[i+1]; 
            }
            std::cout << "Vehicle unparked successfully\n";
        }
    }
};