#include <iostream>
using namespace std;

int main(){
    int* p = 5;
    int& ptr = p;

    cout<<"Pointer: "<<*p<<" | address: "<<&ptr<<endl;

}