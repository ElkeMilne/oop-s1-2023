#include <iostream>

int is_identity(int array[10][10]) {
  for (int i = 0; i < 10; i++) {
    if (array[i][i] != 1) {
      return false;
    } else if (array[i][i] != 0) {
      return false;
    }
  }
  return true;
}
