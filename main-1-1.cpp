#include <iostream>

//extern int* readNumbers();
//extern void printNumbers(int* numbers, int length);

#include "function-1-1.cpp"



int main() {
    int *array = readNumbers();
    printNumbers(array, 10);
}