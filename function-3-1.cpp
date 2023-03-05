//Checks if array is a fan array/palindrome
#include <iostream>

bool isFanArray(int arr[], int n) {   //array, size of array
    if (n <= 1) {  // if size parameter is less than OR equal to 1, return false
        return false;
    }
    for (int i = 0; i <= n/2; i++) {    //Checks if array is not in ascending order
        if (i > 0 && arr[i] < arr[i-1]) {
            return false;  
        }
        if (arr[i] != arr[n-i-1]) {
            return false;  // Checks if array element is not equal to the end element 
        }
    }
    return true;  // is a fan array
}

