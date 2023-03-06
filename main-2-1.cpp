#include <iostream>
extern int min_element(int[], int);

int main(){
    int arr1[] = {1, 2, 1, 2, 1};
    int n = sizeof(arr1);

    std::cout << min_element(arr1, n) << std::endl;
    return 0;

}
