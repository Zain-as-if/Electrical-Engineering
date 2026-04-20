#include "iostream"

using namespace std;

int main(void) {
    // Declare short variable to hold number
    int number;

    do {
        // Ask user to enter number between 1-5
        cout << "Please enter number between 1 and 5: ";
        cin >> number;
        
        for (int i = 0; i < number; i++) {
            cout << "0";
        }

        cout << endl;
    } while (number > 5 || number < 1);
}