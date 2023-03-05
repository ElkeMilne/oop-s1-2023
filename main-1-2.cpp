#include <iostream>
#include "function-1-2.cpp"


int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    double result = average(arr, n);
    std::cout << "The average of the array is: " << result << std::endl;
    return 0;

    int arr1[] = {1, 2, 1, 2, 1};
    int arr2[] = {1, 3, 5, 4, 2};
    int arr3[] = {1, 2, 3, 2, 1};
    int arr4[] = {2, 4, 4, 2};
    int arr5[] = {1};
    int n1 = 5;
    int n2 = 5;
    int n3 = 5;
    int n4 = 4;
    int n5 = 1;

    std::cout << "Average: " << average(arr1, n1) << std::endl;
    std::cout << "Average: " << average(arr2, n2) << std::endl;
    std::cout << "Average: " << average(arr3, n3) << std::endl;
    std::cout << "Average: " << average(arr4, n4) << std::endl;
    std::cout << "Average: " << average(arr5, n5) << std::endl;
}