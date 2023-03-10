#include <iostream>
#include <algorithm>

int median_array(int array[], int n) {
    if (n < 1 || n % 2 == 0) {  // return 0 if size is even or less than 1
        return 0;
    }

    std::sort(array, array + n);  // sort the array in ascending order

    return array[n/2];  // return the middle element
}
