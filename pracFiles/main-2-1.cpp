#include <iostream>

int min_element(int array[], int n){
    int minimum = array[0];
    for (int i = 0; i < n; i++){
        if(array[i] < minimum){
            minimum = array[i];
        }
    }
    return minimum;
}

int main(){
    int n = 3;
    int array[] = {3, 2, 1};
    std::cout << min_element(array, n);
}