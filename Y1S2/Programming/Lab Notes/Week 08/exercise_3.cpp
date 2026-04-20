#include <iostream>
#include <iomanip>

using namespace std;

void fillArray (int [], int);
// Parameters: 1=array, 2=array size

void plotHistogram (const int[], int);
// Parameters: 1=array, 2=array size

int main(void) {
  const int myArraySize = 5;
  int myArray[myArraySize];

  fillArray(myArray, myArraySize);
  plotHistogram(myArray, myArraySize);
}

void fillArray(int myArray[], int myArraySize) {
  for (int counter = 0; counter < myArraySize; counter++) {
    cout << "Enter number to the array: ";
    cin >> myArray[counter];
  }
  cout << endl;
}

void plotHistogram(const int myArray[], int myArraySize) {
  cout << setw(7) << "Element" << setw(10) << "Value" << setw(14) << "Histogram" << endl;
  for (int counter = 0; counter < myArraySize; counter++) {
    cout << setw(7) << counter << setw(10) << myArray[counter];
    cout << setw(14-counter);
    for (int stars = 0; stars < myArray[counter]; stars++) {
      cout << "*";
    }
    cout << endl;
  }
}
