#include <iostream> 
extern int print_summed(int array1[3][3],int array2[3][3]);

int main(){
int scale = 3;
int array1[3][3] = {{1, 0, 1}, {1, 0, 1}, {1, 0, 1}};
int array2[3][3] = {{1, 0, 1}, {1, 0, 1}, {1, 0, 1}};
   
    print_summed(array1, array2);

}