#include <iostream>
#include "ParkingLot.h"

int main() {
    ParkingLot lot(10);
    int id;
    std::string type;
    while (lot.getCount() < 10) {
        std::cout << "Enter vehicle type (car, truck, motorcycle): ";
        std::cin >> type;
        if (type == "car") {
            Car* car = new Car();
            lot.parkVehicle(car);
        } else if (type == "truck") {
            Truck* truck = new Truck();
            lot.parkVehicle(truck);
        } else if (type == "motorcycle") {
            Motorcycle* motorcycle = new Motorcycle();
            lot.parkVehicle(motorcycle);
        } else {
            std::cout << "Invalid vehicle type" << std::endl;
        }
    }
    std::cout << "Enter ID of vehicle to unpark: ";
    std::cin >> id;
    lot.unparkVehicle(id);
    return 0;
}
