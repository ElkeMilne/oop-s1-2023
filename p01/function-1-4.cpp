#include <iostream>

int sum_two_arrays(int arr1[], int arr2[], int n) {
    if (n < 1) {
        return 0;
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr1[i] + arr2[i];
    }

    return sum;
}
