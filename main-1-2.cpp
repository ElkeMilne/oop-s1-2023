#include <iostream>
#include "ParkingLot.h"
#include "Vehicle.h"

using namespace std;

int main() {
    ParkingLot lot(10);

    // prompt user for vehicle type and park until lot is full
    while (lot.getCount() < lot.getCapacity()) {
        char type;
        cout << "Enter vehicle type (c for car, b for bus, t for truck): ";
        cin >> type;

        Vehicle* vehicle;
        switch (type) {
            case 'c':
                vehicle = new Car();
                break;
            case 'b':
                vehicle = new Bus();
                break;
            case 't':
                vehicle = new Truck();
                break;
            default:
                cout << "Invalid vehicle type" << endl;
                continue;
        }

        lot.parkVehicle(vehicle);
        cout << "Vehicle parked. Current count: " << lot.getCount() << endl;
    }

    // prompt user for vehicle ID to unpark
    int vehicle_id;
    cout << "Enter vehicle ID to unpark: ";
    cin >> vehicle_id;

    lot.unparkVehicle(vehicle_id);
    cout << "Vehicle unparked. Current count: " << lot.getCount() << endl;

    return 0;
}
