#include <iostream>

int max_element(int arr[], int n) {

    if (n < 1) {
        return 0;
    }
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}