#include<iostream>
using namespace std;
int main() {
    int* salArray = new int[20];

    // Input salaries
    for (int i = 0; i < 20; i++) {
        cout << "Enter Salary for employee " << (i + 1) << ": ";
        cin >> *(salArray+i);
    }
    // Apply increment formula
    for (int i = 0; i < 20; i++) {
        *(salArray + i) = *(salArray + i) + *(salArray + i) / (i + 1);
    }

    // Display updated salaries
    cout << "\nUpdated Salaries: ";
    for (int i = 0; i < 20; i++) {
        cout << *(salArray + i) << " ";
    }
    cout << endl;
    delete[] salArray;
	return 0;
}