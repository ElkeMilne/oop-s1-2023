#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include "Vehicle.h"

class ParkingLot {
private:
    int capacity;
    int count;
    Vehicle** vehicles;

public:
    ParkingLot(int max_capacity);
    ~ParkingLot();
    int getCapacity() const;
    int getCount() const;
    void parkVehicle(Vehicle* vehicle);
    void unparkVehicle(int vehicle_id);
    int countOverstayingVehicles(int maxParkingDuration);
};

#endif