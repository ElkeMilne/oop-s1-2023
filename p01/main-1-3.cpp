#include <iostream>
#include "function-1-3.cpp"

int main() {
    int arr1[] = {1, 2, 1, 2, 1};
    int arr2[] = {1, 3, 5, 4, 2};
    int arr3[] = {1, 2, 3, 2, 1};
    int arr4[] = {2, 4, 4, 2};
    int arr5[] = {1};
    int n1 = sizeof(arr1);
    int n2 = sizeof(arr2);
    int n3 = sizeof(arr3);
    int n4 = sizeof(arr4);
    int n5 = sizeof(arr5);

    int num = 2;

    std::cout << "The number of occurrences of " << num << " is: " << num_count(arr1, n1, num) << std::endl;
    std::cout << "The number of occurrences of " << num << " is: " << num_count(arr2, n2, num) << std::endl;
    std::cout << "The number of occurrences of " << num << " is: " << num_count(arr3, n3, num) << std::endl;
    std::cout << "The number of occurrences of " << num << " is: " << num_count(arr4, n4, num) << std::endl;
    std::cout << "The number of occurrences of " << num << " is: " << num_count(arr5, n5, num) << std::endl;
}