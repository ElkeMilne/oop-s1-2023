#ifndef BIKE_YARD_H
#define BIKE_YARD_H

#include "Bike.h"

class Bike_yard {
public:
    Bike_yard();
    Bike_yard(int capacity);
    int get_total_stock_count();
    int get_stock_quantity(int code);
    Bike *get_current_stock_list();
    bool add_stock(Bike b);
    ~Bike_yard();

private:
    int capacity;
    int total_stock_count;
    Bike *current_stock_list;
};

#endif /* BIKE_YARD_H */

