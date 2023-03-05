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

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = array_sum(arr, n);
    std::cout << "The sum of the array is: " << result << std::endl;
}