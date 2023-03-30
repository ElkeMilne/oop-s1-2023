#ifndef BIKE_H
#define BIKE_H
#include <string>
#include <iostream>

class Bike {
public:
    Bike();
    Bike(std::string brand, int code);      //contructor, code for bike
    std::string get_brand();                 //returns brand and code
    int get_code();
    ~Bike();                                //destructor

private:
    std::string brand;
    int code;
};

#endif 
