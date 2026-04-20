#include <iostream>
using namespace std;

int getMax(const int[], int);

int main(void) {
  const int myArraySize = 10;
  int myArray[myArraySize] = {22, 43, 1223, 18, 343, 221, 405, 824, 603, 99};

  cout << "Largest value in the array is: " << getMax(myArray, myArraySize) << endl;
}

int getMax(const int myArray[], int myArraySize) {
  int maxNumber = myArray[myArraySize-1];
  for (myArraySize; myArraySize > 0; myArraySize--) {
    if (maxNumber < myArray[myArraySize-1]) {
      maxNumber = myArray[myArraySize-1];
    }
  }

  return maxNumber;
}
