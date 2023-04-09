#ifndef MOTORBIKE_HPP
#define MOTORBIKE_HPP

#include "Vehicle.hpp"

class Motorbike : public Vehicle {
public:
    Motorbike(int ID);
    int getParkingDuration() const override;
};

#endif // MOTORBIKE_HPP
