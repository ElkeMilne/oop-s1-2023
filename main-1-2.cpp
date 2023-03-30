#include <iostream>
#include "Bike_yard.h"

int main() {
    Bike_yard bike_yard(2);

    Bike bike1("test", 111);
    bool added1 = bike_yard.add_stock(bike1);
    std::cout << "Bike 1 added: " << added1 << std::endl;

    Bike bike2("test2", 222);
    bool added2 = bike_yard.add_stock(bike2);
    std::cout << "Bike 2 added: " << added2 << std::endl;

    Bike bike3("test3", 333);
    bool added3 = bike_yard.add_stock(bike3);
    std::cout << "Bike 3 added: " << added3 << std::endl;

    std::cout << "Total stock count: " << bike_yard.get_total_stock_count() << std::endl;
    std::cout << "test 1 bike count: " << bike_yard.get_stock_quantity(123) << std::endl;

    Bike *current_stock_list = bike_yard.get_current_stock_list();
    std::cout << "Current stock list: ";
    for (int i = 0; i < bike_yard.get_total_stock_count(); i++) {
        std::cout << current_stock_list[i].get_brand() << " ";
    }
    std::cout << std::endl;

    return 0;
}
