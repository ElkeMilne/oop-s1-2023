#include "ParkingLot.h"
#include <iostream>

using namespace std;

ParkingLot::ParkingLot(int max_capacity) : capacity(max_capacity), count(0) {
    vehicles = new Vehicle*[capacity];
}

ParkingLot::~ParkingLot() {
}

int ParkingLot::getCapacity() const {
    return capacity;
}

int ParkingLot::getCount() const {
    return count;
}

void ParkingLot::parkVehicle(Vehicle* vehicle) {
    if (count >= capacity) {
        cout << "The lot is full" << endl;
        return;
    }
    vehicles[count++] = vehicle;
}

void ParkingLot::unparkVehicle(int vehicle_id) {
    for (int i = 0; i < count; i++) {
        if (vehicles[i]->getID() == vehicle_id) {
            vehicles[i] = vehicles[--count];
            return;
        }
    }
    cout << "Vehicle not in the lot" << endl;
}

bool ParkingLot::parkVehicle(Vehicle* vehicle) {
    if (count < maxCapacity) {
        vehicles[count] = vehicle;
        count++;
        return true;
    } else {
        std::cout << "The lot is full" << std::endl;
        return false;
    }
}

int ParkingLot::getcount() const {
    return count;
}

int ParkingLot::countOverstayingVehicles(int maxParkingDuration) const {
    int overstayingVehicles = 0;
    for (int i = 0; i < count; ++i) {
        int parkingDuration = vehicles[i]->getParkingDuration();
        if (parkingDuration > maxParkingDuration) {
            overstayingVehicles++;
        }
    }
    return overstayingVehicles;
}
