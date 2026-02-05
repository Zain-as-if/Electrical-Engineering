#include "iostream"
#include "iomanip"
#include "cmath"

using namespace std;

int main(void) {
    int number; 

    cout << "Enter the number of digits displayed: ";
    cin >> number;

    for (int i = 0; i < number; i++) {
        cout << setw(7) << right << pow(10,i) << endl;
    }
}