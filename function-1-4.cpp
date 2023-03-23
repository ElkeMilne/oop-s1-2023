#include "Person.h"
#include <iostream>

PersonList shallowCopyPersonList(PersonList pl) {
    PersonList newList;
    newList.numPeople = pl.numPeople;
    newList.people = pl.people;
    return newList;
}