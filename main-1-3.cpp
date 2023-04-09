#include <iostream>
#include "parkinglot.h"

using namespace std;

int main() {
    ParkingLot parkingLot(10);
    string vehicleType;
    int numParked = 0;

    while (numParked < parkingLot.capacity) {
        cout << "Enter vehicle type (car/bus/motorbike): ";
        cin >> vehicleType;

        Vehicle* vehicle;
        if (vehicleType == "car") {
            vehicle = new Car();
        }
        else if (vehicleType == "bus") {
            vehicle = new Bus();
        }
        else if (vehicleType == "motorbike") {
            vehicle = new Motorbike();
        }
        else {
            cout << "Invalid vehicle type. Try again." << endl;
            continue;
        }

        if (parkingLot.parkVehicle(vehicle)) {
            numParked++;
            cout << "Vehicle parked." << endl;
        }
        else {
            cout << "Parking lot full. Cannot park vehicle." << endl;
        }
    }

    int overstayingCount = parkingLot.countOverstayingVehicles(15);
    cout << "Number of overstaying vehicles: " << overstayingCount << endl;

    return 0;
}