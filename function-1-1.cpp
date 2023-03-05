//Sums all elements in array
#include <iostream>

int array_sum(int arr[], int n) {
    if (n < 1) {
        return 0;
    }

    int total = 0;
    for (int i = 0; i < n; i++) {
        total += arr[i];
    }

    return total;
}