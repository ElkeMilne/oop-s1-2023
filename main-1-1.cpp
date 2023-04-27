#include <iostream>
#include "Car.h"

int main() {
    Car car1(10000);
    std::cout << "Initial price: " << car1.get_price() << std::endl;
    std::cout << "Initial emissions: " << car1.get_emissions() << std::endl;

    car1.drive(50);
    std::cout << "Price after driving: " << car1.get_price() << std::endl;
    std::cout << "Emissions after driving: " << car1.get_emissions() << std::endl;

    return 0;
}
