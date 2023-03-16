#include <iostream>
extern int bin_to_int(int binary_digits[], int number_of_digits);

int main(){
    int binary_digits[] =  {0, 1, 1, 0};
    int number_of_digits = 4;

    std::cout << bin_to_int(binary_digits, number_of_digits);
      
}