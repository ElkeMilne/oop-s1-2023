#include <iostream>
#include "ParkingLot.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

int main() {
    const int MAX_CAPACITY = 10;
    ParkingLot parkingLot(MAX_CAPACITY);

    std::cout << "Parking Lot simulation started\n";

    while (parkingLot.getCount() < MAX_CAPACITY) {
        std::cout << "Enter vehicle type (1=Car, 2=Bus, 3=Motorbike): ";
        int vehicleType;
        std::cin >> vehicleType;

        Vehicle* vehicle;
        if (vehicleType == 1) {
            vehicle = new Car();
        } else if (vehicleType == 2) {
            vehicle = new Bus();
        } else if (vehicleType == 3) {
            vehicle = new Motorbike();
        } else {
            std::cout << "Invalid vehicle type\n";
            continue;
        }

        parkingLot.parkVehicle(vehicle);
    }

    std::cout << "Parking Lot is full\n";
    int overstayingCount = parkingLot.countOverstayingVehicles(15);
    std::cout << "Number of overstaying vehicles: " << overstayingCount << std::endl;

    return 0;
}
