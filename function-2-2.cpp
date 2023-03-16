#include <iostream>
#include <math.h>

int result = 0;

int bin_to_int(int binary_digits[], int number_of_digits){
    for (int i = 0; i < number_of_digits; i++) {
        if (binary_digits[i] == 1) {
            result += pow(2, number_of_digits - 1 - i);
        }
    }
    return result;
}