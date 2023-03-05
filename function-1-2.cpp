#include <iostream>

double average(int arr[], int n) {
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

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    double result = average(arr, n);
    std::cout << "The average of the array is: " << result << std::endl;
    return 0;
}