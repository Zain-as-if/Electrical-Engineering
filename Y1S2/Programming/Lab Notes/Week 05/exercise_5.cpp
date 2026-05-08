#include <iostream>

using namespace std;

int main(void) {
    // declare counting variable
    unsigned int count;

    // loop round six times
    for (count = 1; count <= 20; count++) {
        if (count % 2 == 1) {
            cout << count << endl;
        }
    }
}
