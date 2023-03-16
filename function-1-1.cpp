#include <iostream>

void print_matrix(int array[10][10]){
    for (int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            array[i][j] = array[i][j], " "; 
            if (array[i][i] = 10) {
                std::cout << std::endl;
            }
        }
    }
    return array;
}