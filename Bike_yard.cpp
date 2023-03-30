#include "Bike_yard.h"

Bike_yard::Bike_yard() {
    capacity = 0;
    total_stock_count = 0;
    current_stock_list = nullptr;
}

Bike_yard::Bike_yard(int capacity) {
    this->capacity = capacity;
    total_stock_count = 0;
    current_stock_list = new Bike[capacity];
}

int Bike_yard::get_total_stock_count() {
    return total_stock_count;
}

int Bike_yard::get_stock_quantity(int code) {
    int count = 0;
    for (int i = 0; i < total_stock_count; i++) {
        if (current_stock_list[i].get_code() == code) {
            count++;
        }
    }
    return count;
}

Bike *Bike_yard::get_current_stock_list(){
    return current_stock_list;
}
bool Bike_yard::add_stock(Bike b) {
    if (total_stock_count < capacity) {
        current_stock_list[total_stock_count] = b;
        total_stock_count++;
        return true;
    }
    return false;
}

Bike_yard::~Bike_yard() {
    delete[] current_stock_list;
}
