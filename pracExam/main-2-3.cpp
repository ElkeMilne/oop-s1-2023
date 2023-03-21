#include <iostream>
extern bool is_array_palindrome(int integers[], int length);
extern int palindrome_sum(int integers[], int length);
extern int sum_integers(int integers[], int length);
int main(){
    int integers[] = {1, 2, 3, 2, 1};
    int length = 5;
    std::cout << is_array_palindrome << std::endl;
    std::cout << palindrome_sum << std::endl;
}