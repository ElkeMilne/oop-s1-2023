#include <iostream>
#include "function-2-2.cpp"

extern int max_element(int[], int);

int main(){
    int arr1[] = {1, 2, 1, 2, 1};
    int n = sizeof(arr1);

    std::cout << max_element(arr1, n) << std::endl;

}
