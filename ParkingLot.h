#include <vector>
#include <iostream>

using namespace std;

class Vehicle {
public:
    virtual int getParkingDuration() = 0;
};

class Car : public Vehicle {
public:
    virtual int getParkingDuration() {
        return 10; // return a dummy value for demonstration purposes
    }
};

class Bus : public Vehicle {
public:
    virtual int getParkingDuration() {
        return 20; // return a dummy value for demonstration purposes
    }
};

class Motorbike : public Vehicle {
public:
    virtual int getParkingDuration() {
        return 5; // return a dummy value for demonstration purposes
    }
};

class ParkingLot {
private:
    int capacity;
    vector<Vehicle*> parkedVehicles;

public:
    ParkingLot(int capacity) {
        this->capacity = capacity;
    }

    bool parkVehicle(Vehicle* vehicle) {
        if (parkedVehicles.size() < capacity) {
            parkedVehicles.push_back(vehicle);
            return true;
        }
        return false;
    }

    int countOverstayingVehicles(int maxParkingDuration) {
        int count = 0;
        for (Vehicle* vehicle : parkedVehicles) {
            if (vehicle->getParkingDuration() > maxParkingDuration) {
                count++;
            }
        }
        return count;
    }
};