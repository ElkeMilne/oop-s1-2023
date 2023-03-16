#include <iostream>
extern int print_binary_str(std::string decimal);

int main() {
    std::string decimal = "789";
    print_binary_str(decimal);
    return 0;
}