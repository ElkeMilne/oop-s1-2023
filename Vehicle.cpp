#include "Vehicle.hpp"

Vehicle::Vehicle(int ID) {
    this->ID = ID;
    time(&timeOfEntry);
}

int Vehicle::getID() const {
    return ID;
}