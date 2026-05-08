#include <iostream>

using namespace std;

int main() {
    
    bool result;
    int a, b;

    cout << "Enter 2 Integer Values" << endl;
    cout << "Number 1: ";
    cin >> a;
    cout << "Number 2: ";
    cin >> b;

    result = (a==b);
    cout << a << " is equal to " << b << "? " << result << endl;

    result = (a!=b);
    cout << a << " is not equal to " << b << "? " << result << endl;

    result = (a>=b);
    cout << a << " is greater than or equal to " << b << "? " << result << endl;

    result = (a<=b);
    cout << a << " is less than or equal to " << b << "? " << result << endl;

    return 0;
}