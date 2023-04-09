#include <iostream>
#include "ParkingLot.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

int main() {
    ParkingLot parkingLot(10);

    for (int i = 1; i <= 5; i++) {
        Car* car = new Car(i, i*60);
        parkingLot.parkVehicle(car);
    }

    for (int i = 6; i <= 8; i++) {
        Bus* bus = new Bus(i, i*90);
        parkingLot.parkVehicle(bus);
    }

    for (int i = 9; i <= 10; i++) {
        Motorbike* motorbike = new Motorbike(i, i*30);
        parkingLot.parkVehicle(motorbike);
    }

    int overstayingVehicles = parkingLot.countOverstayingVehicles(15);
    std::cout << "Number of overstaying vehicles: " << overstayingVehicles << std::endl;

    return 0;
}
