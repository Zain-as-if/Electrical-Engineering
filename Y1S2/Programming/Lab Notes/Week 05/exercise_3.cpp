#include "iostream"

using namespace std;

int main(void) {
    // Declare short variable to hold number
    int number;

    do {
        // Ask user to enter number between 1-5
        cout << "Please enter number between 1 and 5: ";
        cin >> number;
        
        if (number == 1) {
            cout << "0" << endl;
        } else if (number == 2) {
            cout << "00" << endl;
        } else if (number == 3) {
            cout << "000" << endl;
        } else if (number == 4) {
            cout << "0000" << endl;
        } else if (number == 5) {
            cout << "00000" << endl;
        }
    } while (number > 5 || number < 1);
}