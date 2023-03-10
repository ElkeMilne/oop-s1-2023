#include <iostream>
#include "function-3-4.cpp"


int main(){
    char grade = 'A';
    print_pass_fail(grade);  // Outputs "Pass"

    grade = 'B';
    print_pass_fail(grade);  // Outputs "Pass"

    grade = 'C';
    print_pass_fail(grade);  // Outputs "Pass"

    grade = 'D';
    print_pass_fail(grade);  // Outputs "Fail"

    grade = 'E';
    print_pass_fail(grade);  // Outputs "Fail"

   grade = 'F';
    print_pass_fail(grade);  // Outputs "Nothing"
}