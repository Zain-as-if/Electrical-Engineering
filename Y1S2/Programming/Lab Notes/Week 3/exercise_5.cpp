#include <iostream> 

using namespace std;

int main() {

    bool result;
    float temp;

    cout << "Enter a temperature in deg C: ";
    cin >> temp;
    cout << endl; 

    result = (temp>0) && (temp<5);
    cout << "Temperature is more than 0 deg C and less than 5 deg C? " << result << endl; 

    result = (temp>5) && (temp<10);
    cout << "Temperature is more than 5 deg C and less than 10 deg C? " << result << endl; 

    result = (temp>10) && (temp<20);
    cout << "Temperature is more than 10 deg C and less than 20 deg C? " << result << endl; 

    result = (temp>20);
    cout << "Temperature is more than 20 deg C? " << result << endl; 

    result = (temp<0);
    cout << "Temperature is less than 0 deg C? " << result << endl; 

    return 0;
}