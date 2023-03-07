// function to convert decimal to binary
#include <iostream>

void numberToBinary(int n) {
    int binary[32];  // array that stores binary digets
    int i = 0; 
    while (n > 0) {
        binary[i] = n % 2;  //item is equal to the remainder of n/2 and added to array
        n /= 2;  //n = n/2
        i++;  // increment the binary digit counter
    }
    for (int j = i - 1; j >= 0; j--) {  //initilise j = i - 1 , reverse order
        std::cout << binary[j];  // print binary digets in correct order
    }
    std::cout << std::endl;
}

int main() {
    int number = 75;  // decimal number to convert to binary
    std::cout << "Decimal " << number << " is binary ";
    numberToBinary(number); 
    return 0;
}