#include "Car.h"

Car::Car(int ID) : Vehicle(ID) {}

int Car::getParkingDuration() const {
    std::time_t currentTime;
    time(&currentTime);
    int duration = currentTime - timeOfEntry;
    return duration * 0.9;
}