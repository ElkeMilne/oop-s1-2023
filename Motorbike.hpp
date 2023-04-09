#ifndef MOTORBIKE_H
#define MOTORBIKE_H

#include "Vehicle.hpp"

class Motorbike : public Vehicle {
public:
    Motorbike(int ID);
    int getParkingDuration() const override;
};

#endif // MOTORBIKE_H