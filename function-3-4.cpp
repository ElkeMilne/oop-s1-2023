#include <iostream>

#include <iostream>

void print_pass_fail(char grade) {
    switch (grade) {
        case 'A':
        case 'B':
        case 'C':
            std::cout << "Pass\n";
            break;
        case 'D':
        case 'E':
            std::cout << "Fail\n";
            break;
        default:
            std::cout << "Nothing\n";
            break;
    }
}

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