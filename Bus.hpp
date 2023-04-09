#ifndef BUS_HPP
#define BUS_HPP

#include "Vehicle.hpp"

class Bus : public Vehicle {
public:
    Bus(int ID);
    int getParkingDuration() const override;
};

#endif // BUS_HPP
