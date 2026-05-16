#include <iostream>

using namespace std;

int main() {
    int moneyInPence, pounds, pence;
    cout << "Please enter total funds in pence" << endl;
    cin >> moneyInPence;

    pounds = moneyInPence / 100;
    pence = moneyInPence % 100;

    cout << moneyInPence << " pence is equivalent to £" << pounds << "." << pence << endl;

    int timeInSeconds, minutes, seconds; 
    cout << "Please enter total number of seconds" << endl;
    cin >> timeInSeconds;

    minutes = timeInSeconds / 60;
    seconds = timeInSeconds % 60;

    cout << timeInSeconds << " seconds is equivalent to " << minutes << " minutes " << seconds << " seconds" << endl;

    return 0;
}