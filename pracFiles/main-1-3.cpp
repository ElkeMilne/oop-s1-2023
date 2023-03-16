#include <iostream>

int num_count(int array[], int n, int number){
    if (n < 1){
        return 0;
    }
    if (n == number){
        return 1;
    }
    else
    return 0;
}

int main(){
    int n = 3;
    int number = 3;
    int array[] = {1, 2, 3};

    std::cout << num_count(array, n, number);
}