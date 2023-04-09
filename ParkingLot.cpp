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
