#include <iostream>

int sum = 0;

int sum_two_arrays(int array[], int secondarray[], int n){
    for(int i = 0; i < n; i++){
        sum += array[i] + secondarray[i];
    }
return sum;
}

int main(){
    int n = 3;
    int array[] = {1, 2, 3};
    int secondarray[] = {4, 5, 6};
    std::cout << sum_two_arrays(array, secondarray, n);
}