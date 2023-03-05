#include <iostream>

double sum_even(double arr[], int n) {
    if (n < 1) {
        return 0;
    }
    
    double sum = 0;
    for (int i = 0; i < n; i += 2) {
        sum += arr[i];
    }
    
    return sum;
}
