#include <iostream> 

using namespace std;

void swap(int *x, int *y);

int main(void) {
  int a = 3, b = 5;

  cout << "a = " << a << ", b = " << b << endl;
  swap(&a, &b);
  cout << "a = " << a << ", b = " << b << endl;

  return 0;
}

void swap(int *x, int *y) {
  int temp = *x;
  *x = *y;
  *y = temp;
}
