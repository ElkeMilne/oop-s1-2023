#ifndef BUS_H
#define BUS_H

#include "Vehicle.hpp"

class Bus : public Vehicle {
public:
    Bus(int ID);
    int getParkingDuration() const override;
};

#endif // BUS_H