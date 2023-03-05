#include <iostream>
#include "function-3-5.cpp"

int main() {
  //define array and size
    double arr1[] = {1, 2, 1, 2, 1};
    double arr2[] = {1.2, 3.5, 5.2, 4.1, 2.0};
    double arr3[] = {1.5, 2, 3.5, 2, 1.5};
    double arr4[] = {2, 4, 4, 2};
    double arr5[] = {1};
    
    int n1 = 5;
    int n2 = 5;
    int n3 = 5;
    int n4 = 4;
    int n5 = 1;

    double sum1 = sum_even(arr1, n1);   //ensure values remain as decimals
    double sum2 = sum_even(arr2, n2);
    double sum3 = sum_even(arr3, n3);
    double sum4 = sum_even(arr4, n4);
    double sum5 = sum_even(arr5, n5);

    std::cout << "Sum of even elements: " << sum1 << std::endl; //3
    std::cout << "Sum of even elements: " << sum2 << std::endl; //8.4
    std::cout << "Sum of even elements: " << sum3 << std::endl; //6.5
    std::cout << "Sum of even elements: " << sum4 << std::endl; //6
    std::cout << "Sum of even elements: " << sum5 << std::endl;//1

}