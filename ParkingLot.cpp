#include "ParkingLot.h"
#include <iostream>

using namespace std;

ParkingLot::ParkingLot(int max_capacity) : capacity(max_capacity), count(0) {
    vehicles = new Vehicle*[capacity];
}

ParkingLot::~ParkingLot() {
    for (int i = 0; i < count; i++) {
        delete vehicles[i];
    }
    delete[] vehicles;
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
        if (vehicles[i]->getId() == vehicle_id) {
            delete vehicles[i];
            vehicles[i] = vehicles[--count];
            return;
        }
    }
    cout << "Vehicle not in the lot" << endl;
}
int ParkingLot::countOverstayingVehicles(int maxParkingDuration) {
    int count = 0;
    for (Vehicle* vehicle : vehicles) {
        if (vehicle->getDuration() > maxParkingDuration) {
            count++;
        }
    }
    return count;
}