#include <iostream>
#include <vector>
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

int main() {
    std::vector<Vehicle*> vehicles;
    int numCars, numBuses, numMotorbikes;

    std::cout << "Enter the number of cars: ";
    std::cin >> numCars;
    for (int i = 0; i < numCars; i++) {
        int id;
        std::cout << "Enter the ID of car " << i+1 << ": ";
        std::cin >> id;
        vehicles.push_back(new Car(id));
    }

    std::cout << "Enter the number of buses: ";
    std::cin >> numBuses;
    for (int i = 0; i < numBuses; i++) {
        int id;
        std::cout << "Enter the ID of bus " << i+1 << ": ";
        std::cin >> id;
        vehicles.push_back(new Bus(id));
    }

    std::cout << "Enter the number of motorbikes: ";
    std::cin >> numMotorbikes;
    for (int i = 0; i < numMotorbikes; i++)
}
