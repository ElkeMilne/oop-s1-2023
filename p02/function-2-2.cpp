#include <iostream>
#include <cmath>

int binary_to_int(int arr[], int size) {
    int result = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == 1) {
            result += pow(2, size - 1 - i);
        }
    }
    return result;
}