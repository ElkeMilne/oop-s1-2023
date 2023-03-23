#include "Person.h"
#include <iostream>
#include "function-1-1.cpp"

int main() {
    int n = 3;
    Person* arr;
    arr = createPersonArray(n);
    for (int i = 0; i < n; i++){
        std::cout << "Person " << i+1 << "- Name: " << arr[i].name << "- Age: " << arr[i].age << "\n";
    }
    delete[] arr;
    return 0;
}