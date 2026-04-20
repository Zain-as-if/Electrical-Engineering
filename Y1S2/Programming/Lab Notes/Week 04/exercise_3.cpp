#include "iostream"
#include "iomanip"

using namespace std;

int main(void) {
    int number;

    cout << "Enter an integer value: ";
    cin >> number;

    cout << "Your value is " << dec << number << " in decimal" << endl;
    cout << "Your value is " << oct << number << " in octal" << endl;
    cout << "Your value is " << hex << uppercase << number << " in hexadecimal" << endl;
}