#ifndef CAR_H
#define CAR_H

#include "Vehicle.hpp"

class Car : public Vehicle {
public:
    Car(int ID);
    int getParkingDuration() const override;
};

#endif // CAR_H