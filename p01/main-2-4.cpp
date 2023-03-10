#include <iostream>
extern int is_ascending(int[], int);

int main(){
    int arr1[] = {2, 5, 9, 2, 1};
    int n = sizeof(arr1);
    std::cout << is_ascending(arr1, n) << std::endl;

}