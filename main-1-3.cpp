#include "Person.h"
#include <iostream>

int main() {
    // Create a PersonList and deep copy it
    int n = 3;
    PersonList pl;
    pl.numPeople = n;
    pl.people = new Person[n];
    for (int i = 0; i < n; i++) {
        pl.people[i].name = "John Doe";
        pl.people[i].age = 0;
    }
    PersonList copy = deepCopyPersonList(pl);
    
    // Print original and copy
    std::cout << "Original: ";
    for (int i = 0; i < n; i++) {
        std::cout << pl.people[i].name << " " << pl.people[i].age << "; ";
    }
    std::cout << "\n";
    
    std::cout << "Copy: ";
    for (int i = 0; i < n; i++) {
        std::cout << copy.people[i].name << " " << copy.people[i].age << "; ";
    }
}