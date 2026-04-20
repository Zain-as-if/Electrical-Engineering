#include "iostream"

using namespace std;

int main() {
    int number;

    cout << "Enter Number: \n";
    cin >> number; 

    int number_squared = number*number;

    cout << number << " Squared is: " << number_squared << endl;

    return 0;
}