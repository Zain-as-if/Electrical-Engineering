#include "iostream"
#include "iomanip"
#include "cmath"

using namespace std;

int main(void) {
    const double PI = 3.141592653;
    unsigned int radius;

    cout << "Enter the radius of a sphere in metres: ";
    cin >> radius;

    double volume = (4.0/3.0)*PI*(pow(radius,3));

    cout << "The volume of a sphere of radius " << radius << " m is " << setprecision(4) << volume << " or " << scientific << uppercase << volume << endl;
}