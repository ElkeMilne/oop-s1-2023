#include <iostream>

int sum = 0;

int sum_diagonal(int array[4][4]){
    for (int i = 0; i < 4; i++){
        sum += array[i][i];
    }
    return sum;
}

int main(){
      
}