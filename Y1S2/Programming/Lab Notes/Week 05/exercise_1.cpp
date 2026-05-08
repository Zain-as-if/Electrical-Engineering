#include "iostream"

using namespace std;

int main(void) {
    // declare char variables to hold number of days
    short daysInJan;

    // ask user to enter number of days in January
    cout << "How many days are there in January?";
    cin >> daysInJan;

    // test answer
    if (daysInJan == 31) {
        cout << "Well done, you are correct!\n";
    } else {
        cout << "Sorry, you are wrong\n";
    }
}