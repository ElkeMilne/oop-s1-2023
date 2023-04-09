#include <iostream>
#include "ParkingLot.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

int main() {
    // Create a parking lot with a capacity of 10 vehicles
    ParkingLot parkingLot(10);
    
    // Park 5 Car objects, 3 Bus objects, and 2 Motorbike objects in the parking lot
    int numCars = 5;
    int numBuses = 3;
    int numMotorbikes = 2;
    
    // Prompt the user to park each type of vehicle until the parking lot is full
    while (numCars > 0 || numBuses > 0 || numMotorbikes > 0) {
        std::string vehicleType;
        if (numCars > 0) {
            std::cout << "Enter type of vehicle to park (Car, Bus, or Motorbike): ";
            std::cin >> vehicleType;
            if (vehicleType == "Car") {
                Car* car = new Car(numCars);
                parkingLot.parkVehicle(car);
                numCars--;
            }
        }
        if (numBuses > 0 && vehicleType != "Bus") {
            std::cout << "Enter type of vehicle to park (Car, Bus, or Motorbike): ";
            std::cin >> vehicleType;
            if (vehicleType == "Bus") {
                Bus* bus = new Bus(numBuses);
                parkingLot.parkVehicle(bus);
                numBuses--;
            }
        }
        if (numMotorbikes > 0 && vehicleType != "Motorbike") {
            std::cout << "Enter type of vehicle to park (Car, Bus, or Motorbike): ";
            std::cin >> vehicleType;
            if (vehicleType == "Motorbike") {
                Motorbike* motorbike = new Motorbike(numMotorbikes);
                parkingLot.parkVehicle(motorbike);
                numMotorbikes--;
            }
        }
        if (parkingLot.getCount() == parkingLot.getMaxCapacity()) {
            std::cout << "The parking lot is full." << std::endl;
            break;
        }
    }
    
    // Count the number of vehicles that have overstayed in the parking lot for more than 15 seconds
    int numOverstayingVehicles = parkingLot.countOverstayingVehicles(15);
    std::cout << "Number of overstaying vehicles: " << numOverstayingVehicles << std::endl;
    
    return 0;
}
