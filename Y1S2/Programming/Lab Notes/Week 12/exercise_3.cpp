#include <iostream>

using namespace std;

void square(int *num); 

int main(void) {
  int x = 8;

  cout << x << endl;

  // call square function
  square(&x); // pass address of x

  cout << x << endl;

  return 0;
}

void square(int *num) {
  *num = (*num) * (*num); // dereference and square value
}
