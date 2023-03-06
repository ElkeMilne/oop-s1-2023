#include <iostream>

bool is_ascending(int arr[], int n) {
    if (n < 1) {
        return false;
    }
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i-1]) {
            return false;
        }
    }
    return true;
}