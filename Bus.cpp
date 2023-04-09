#include "Bus.hpp"

Bus::Bus(int ID) : Vehicle(ID) {}

int Bus::getParkingDuration() const {
    std::time_t currentTime;
    time(&currentTime);
    int duration = currentTime - timeOfEntry;
    return duration * 0.75;
}