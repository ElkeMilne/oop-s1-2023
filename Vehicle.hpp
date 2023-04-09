#ifndef VEHICLE_HPP
#define VEHICLE_HPP

#include <ctime>

class Vehicle {
private:
    std::time_t timeOfEntry;
    int ID;
public:
    Vehicle(int ID);
    int getID() const;
    virtual int getParkingDuration() const = 0;
};

#endif // VEHICLE_H