#include <iostream>
#include <string>
using namespace std;

int main() {
    string str; // string instead of char*
    cout << "Enter a string: ";
    getline(cin, str);

    for (int i = 0, j = str.size() - 1; i < j; i++, j--) // reverse in-place
        swap(str[i], str[j]);

    cout << "Reversed: " << str << endl;
    return 0;
}
