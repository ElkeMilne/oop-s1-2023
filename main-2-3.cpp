#include <iostream>
extern int two_five_nine(int[], int);

int main(){
    int arr1[] = {2, 5, 9, 2, 1};
    int n = sizeof(arr1);
    std::cout << two_five_nine(arr1, n) << std::endl;

}