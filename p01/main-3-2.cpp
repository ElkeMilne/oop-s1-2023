#include <iostream>
#include "function-3-2.cpp"

int main() {
    //define array elements
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 3, 5, 4, 2};
    int arr3[] = {1, 2, 3, 2, 1};
    int arr4[] = {2, 4, 4, 2};
    int arr5[] = {0};
    //define size of array
    int n1 = 5;
    int n2 = 5;
    int n3 = 5;
    int n4 = 4;
    int n5 = 0;

    //output
    std::cout << "Median: " << median_array(arr1, n1) << std::endl;  // 3
    std::cout << "Median: " << median_array(arr2, n2) << std::endl;  // 3
    std::cout << "Median: " << median_array(arr3, n3) << std::endl;  // 2
    std::cout << "Median: " << median_array(arr4, n4) << std::endl;  // 0
    std::cout << "Median: " << median_array(arr5, n5) << std::endl;  // 0
}