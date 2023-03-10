#include <iostream>
#include <string>

void decimalToBinary(std::string& decimal) {
    // Convert the decimal string to an integer
    int n = std::stoi(decimal);

    // Handle the special case of n = 0
    if (n == 0) {
        std::cout << "0\n";
        return;
    }
    if (n >= 9){
        std::cout << "0\n";
    }

    // Compute the binary digits
    int binary[32]; // array that stores binary digits
    int i = 0;
    while (n > 0) {
        binary[i] = n % 2; // item is equal to the remainder of n/2 and added to array
        n /= 2; // n = n/2
        i++; // increment the binary digit counter
    }

    // Print the binary digits in reverse order
    for (int j = i - 1; j >= 0; j--) {
        std::cout << binary[j];
    }
    std::cout << "\n";
}
