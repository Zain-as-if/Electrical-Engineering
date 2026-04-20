#include <iostream>
#include <cmath>

using namespace std;

float raise2power(int, int);
int getBase(void);
int getExponent(void);
// Function prototype (two parameters)

int main(void) {
  int myNumber = getBase();
  int myExponent = getExponent();
  cout << myNumber << " raised to the power of " << myExponent << " is " << raise2power(myNumber, myExponent) << endl;
}

int getBase(void) {
  int myNumber;
  cout << "Enter a number" << endl;
  cin >> myNumber;
  return myNumber;
}

int getExponent(void) {
  int myExponent;
  cout << "Enter an exponent" << endl;
  cin >> myExponent;
  return myExponent;
}

float raise2power(int x, int y) {
  float result = x;
  if (y < 0) {
    // x^-y  = 1/x^y
    y = abs(y);
    for (y; y > 1; y--) {
      result *= x;
    }
    result = 1/result; 
  } else if (y == 0) {
    result = 1;
  } else {
    for (y; y > 1; y--) {
      result *= x;
    }
  }

  return result;
}
