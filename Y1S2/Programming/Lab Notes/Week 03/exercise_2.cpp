#include <iostream>

using namespace std;

int main() {
    float value1, value2;

    cout << "Enter 2 Numbers\n";
    
    cout << "Number 1: ";
    cin >> value1;
    
    cout << "Number 2: ";
    cin >> value2;

    cout << value1 << " + " << value2 << " = " << (value1 + value2) << endl;
    cout << value1 << " - " << value2 << " = " << (value1 - value2) << endl;
    cout << value1 << " * " << value2 << " = " << (value1 * value2) << endl;
    cout << value1 << " / " << value2 << " = " << (value1 / value2) << " (Integer Division)" << endl;
    cout << value1 << " % " << value2 << " = " << (int(value1) % int(value2)) << " (Modulo)" << endl;

    return 0;
}