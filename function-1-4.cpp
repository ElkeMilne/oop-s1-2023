#include <iostream>
int scale = 0;

void print_scaled(int array[3][3],int scale){
    for (int i = 0; i < 3 ; i++) {
        for (int j = 0; j < 3; j++){
            array[i][j] = array[i][j]*scale;
            }
        }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            std::cout << array[i][j] << " ";
            }
            std::cout<<std::endl;
        }
    
}

//{3, 5, 7}
//{3, 5, 7}
//{3, 5, 7}