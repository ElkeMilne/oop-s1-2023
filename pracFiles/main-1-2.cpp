#include <iostream>

int sum = 0;
int mean = 0;

double array_mean(int array[], int n){
    for(int i = 0; i < n; i++){
        sum += array[i];
        mean = sum / n;
    }
    return mean;
}

int main(){
    int n = 3;
    int array[] = {1, 2, 3};

    std::cout << array_mean(array, n);
}

