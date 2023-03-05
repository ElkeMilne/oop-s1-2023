#include <iostream>

double array_mean(int arr[], int n) {
    if (n < 1) {
        return 0.0;
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    double avg = sum / n;
    return avg;
}

