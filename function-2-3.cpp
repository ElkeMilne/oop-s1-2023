#include <iostream>

bool is_array_palindrome(int integers[], int length) {

    if (length <= 0) {
        return false;
    }
    int left = 0;
    int right = length - 1;
    while (left < right) {
        if (integers[left] != integers[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int palindrome_sum(int integers[], int length) {
    if (length <= 0) {
        return -1;
    }
    if (is_array_palindrome(integers, length)) {
        int sum = 0;
        for (int i = 0; i < length; i++) {
            sum += integers[i];
        }
        return sum;
    }
    return -2;
}

int sum_integers(int integers[], int length){
    
}

