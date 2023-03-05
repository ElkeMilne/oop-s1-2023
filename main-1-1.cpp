#include <iostream>
#include "function-1-1.cpp"


int main() {
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

    std::cout << "The sum of the array is: " << array_sum(arr1, n1) << std::endl;
    std::cout << "The sum of the array is: " << array_sum(arr2, n2) << std::endl;
    std::cout << "The sum of the array is: " << array_sum(arr3, n3) << std::endl;
    std::cout << "The sum of the array is: " << array_sum(arr4, n4) << std::endl;
    std::cout << "The sum of the array is: " << array_sum(arr5, n5) << std::endl;
}