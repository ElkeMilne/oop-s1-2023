#ifndef FORD_H
#define FORD_H

class Ford {
public:
Ford();            
Ford(int badgeNumber, int price);  
  
int badgeNumber;
float litresOfFuel;      // Initially 60L

void refuel(int litres);
void drive(int kms);  

private:
    int price;
    int emissions;
};

#endif

