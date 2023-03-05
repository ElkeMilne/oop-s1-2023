#include <iostream>

int min_element(int arr[], int n) {

    if (n < 1) {
        return 0;
    }
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    return min;
}
