#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

int main() {
    int numCars, numBuses, numMotorbikes;
    std::cout << "Enter the number of cars: ";
    std::cin >> numCars;
    std::cout << "Enter the number of buses: ";
    std::cin >> numBuses;
    std::cout << "Enter the number of motorbikes: ";
    std::cin >> numMotorbikes;

    const int numVehicles = numCars + numBuses + numMotorbikes;
    Vehicle* vehicles[numVehicles];

    int currentID = 1;

    for (int i = 0; i < numCars; i++) {
        vehicles[i] = new Car(currentID++);
    }

    for (int i = numCars; i < numCars + numBuses; i++) {
        vehicles[i] = new Bus(currentID++);
    }

    for (int i = numCars + numBuses; i < numVehicles; i++) {
        vehicles[i] = new Motorbike(currentID++);
    }

    std::cout << "
}
