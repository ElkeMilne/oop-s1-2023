#include <iostream>
#include "Bike.h"

int main() {
    Bike bike1;
    Bike bike2("test", 123);

    std::cout << "Bike 1 brand: " << bike1.get_brand() << ", code: " << bike1.get_code() << std::endl;
    std::cout << "Bike 2 brand: " << bike2.get_brand() << ", code: " << bike2.get_code() << std::endl;

    return 0;
}
