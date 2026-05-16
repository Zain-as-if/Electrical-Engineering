#include "iostream"
#include "cmath"

using namespace std;

#define PI 3.141592

int main() {
    float radius; 

    cout << "Enter Radius In Metres: ";
    cin >> radius;

    float circumference = PI * radius * 2;
    float volume = (4.0/3.0)*PI*(pow(radius,3));

    cout << "Circumference Of Circle Is: " << circumference << endl; 
    cout << "The Volume Of A Sphere Is: " << volume << endl; 
}