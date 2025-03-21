#include <iostream>
using namespace std;

int main() {
    int *ptr = new int; 
    *ptr = 42; 
    cout << "Value at pointer: " << *ptr << endl;
    cout << "Pointer address: " << ptr << endl;

    delete ptr; //  this is use to Deallocating memory
    ptr = nullptr; // Avoid dangling pointer

    return 0;
}
