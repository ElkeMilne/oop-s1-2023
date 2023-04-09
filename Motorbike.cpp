#include "Motorbike.hpp"

Motorbike::Motorbike(int ID) : Vehicle(ID) {}

int Motorbike::getParkingDuration() const {
    std::time_t currentTime;
    time(&currentTime);
    int duration = currentTime - timeOfEntry;
    return duration * 0.85;
}