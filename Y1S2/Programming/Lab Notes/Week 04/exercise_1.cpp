#include "iostream"
#include "iomanip"

using namespace std;

int main(void) {
    const double E = 2.718281828;

    int sigfigs;

    cout << "Enter the number of sig figs with which to display Euler's number: ";
    cin >> sigfigs;

    cout << "Euler's number to " << sigfigs << " significant figures is " << setprecision(sigfigs) << E << endl;
}