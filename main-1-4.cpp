#include <iostream> 
extern int print_scaled(int array[3][3],int scale);

int main(){
int scale = 3;
int array[3][3] = {{1, 0, 1}, {1, 0, 1}, {1, 0, 1}};

    print_scaled(array, scale);
}