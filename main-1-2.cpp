#include "Person.h"
#include <iostream>

int main() {
    int n = 3;
    PersonList list;
    list = createPersonList(n);
    for (int i = 0; i < n; i++) {
        std::cout << "Person " << i+1 << "- Name: " << list.people[i].name << "- Age: " << list.people[i].age << "\n";
    }
    delete[] list.people;
    return 0;
}