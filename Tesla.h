#ifndef TESLA_H
#define TESLA_H

class Tesla {
public:
Tesla();            
Tesla(char model, int price);  
  
char model;
float batteryPercentage;      // Initially 100%

void chargeBattery(int mins);            
void drive(int kms); 

private:
    int price;
    int emissions;
};

#endif
