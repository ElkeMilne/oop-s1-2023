#include <iostream>
#include "function-1-4.cpp"

main(){
   int arr1[] = {1, 2, 1, 2, 1};
    int arr2[] = {1, 3, 5, 4, 2};
    int arr3[] = {1, 2, 3, 2};
    int arr4[] = {2, 4, 4, 2};
    int n1 = sizeof(arr1);
    int n2 = sizeof(arr3);

    std::cout << "The Sum of array 1 and 2 is: " << sum_two_arrays(arr1, arr2, n1) << std::endl;
    std::cout << "The Sum of array 1 and 2 is: " << sum_two_arrays(arr3, arr4, n2) << std::endl;
}