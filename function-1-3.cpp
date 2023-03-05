#include <iostream>

int num_count(int arr[], int n, int num) {
    if (n < 1) {
        return 0;
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == num) {
            count++;
        }
    }

    return count;
}
