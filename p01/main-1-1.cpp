#include <iostream>
#include "function-1-1.cpp"

int main() {
  int array[4][4] = {{2, 4, 4, 4}, {10, 2, 16, 18}, {20, 22, 2, 24}, {26, 28, 30, 2}};
  int sum = sum_diagonal(array);
  std::cout << "Sum of diagonal integers: " << sum;
}