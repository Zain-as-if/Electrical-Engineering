#include "iostream"

using namespace std;

int main(void) {
    // Declare short variable to hold number
    int number;

    // Ask user to enter number between 1-5
    cout << "Please enter number between 1 and 5: ";
    cin >> number;

    switch(number) {
        case (1):
            cout << "0" << endl;
            break;
        case (2):
            cout << "00" << endl;
            break;
        case (3):
            cout << "000" << endl;
            break;
        case (4): 
            cout << "0000" << endl;
            break;
        case (5): 
            cout << "00000" << endl;
            break;
        default:
            cout << "Invalid number" << endl;
    }
}