#include "Person.h"
#include <iostream>

// Function prototype
PersonList shallowCopyPersonList(PersonList pl);

int main() {
    // Create a PersonList object
    int n = 3;
    PersonList list;
    list.numPeople = n;
    list.people = new Person[n];
    for (int i = 0; i < n; i++) {
        list.people[i].name = "John Doe";
        list.people[i].age = 0;
    }

    // Create a shallow copy of the PersonList object
    PersonList newList = shallowCopyPersonList(list);

    // Modify the original PersonList object
    for (int i = 0; i < n; i++) {
        list.people[i].name = "Jane Doe";
        list.people[i].age = 1;
    }

    // Print the contents of the new PersonList object
    for (int i = 0; i < n; i++) {
        std::cout << "Person " << i+1 << "- Name: " << newList.people[i].name << "- Age: " << newList.people[i].age << "\n";
    }

    // Free memory
    delete[] list.people;
    return 0;
}
