#include <iostream>
using namespace std;

void analyze_pointer(int* ptr) {
    cout << "Memory Location: " << ptr << endl; // prints memory location
    cout << "Value: " << *ptr << endl;  // prints value at memory location
}

int main() {
    int iValue = 42;
    analyze_pointer(&iValue);

    int* hValue = new int;
    *hValue = 99;
    analyze_pointer(hValue);

    delete hValue; // free heap memory
    return 0;
}
