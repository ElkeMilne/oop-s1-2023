#include <iostream>

int sum = 0;

int array_sum(int array[], int n)
{
    for (int i = 0; i < n; i++){
        sum += array[i];
    }
return sum;
}

int main(){
    int n = 3;
    int array[] = {1, 2, 3};
    std::cout << array_sum(array, n);
}