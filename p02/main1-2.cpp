#include <iostream>
#include "function-1-2.cpp"

int main() {
  int array[2][2] = {{1, 0}, {0, 1}};
  std::cout << is_identity(array);
}
