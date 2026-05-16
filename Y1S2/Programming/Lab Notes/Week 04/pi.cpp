#include "iostream"
#include "iomanip"

using namespace std;

int main() {
    const double PI = 3.141592653;       // Define PI to 10 sig. figs
    cout << PI << endl;                 // Output PI to 6 sig. figs (default)
    cout << setprecision(10) << PI << endl;

    return 0;
}