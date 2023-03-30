#include <iostream>
#include "Bike.h"
#include "Bike_yard.h"
#include <string>

Bike::Bike() {
    brand = "";
    code = 0;
}

Bike::Bike(std::string brand, int code) {
    this->brand = brand;
    this->code = code;
}

std::string Bike::get_brand() {
    return brand;
}

int Bike::get_code() {          
    return code;
}

Bike::~Bike() {             //destructor
}

Bike_yard::Bike_yard() {
    capacity = 0;
}


