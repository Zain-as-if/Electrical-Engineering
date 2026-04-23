#include <iostream>

using namespace std;

int main(void) {
  const int myArraySize = 100;
  int myArray[myArraySize] = {0};
  int i;

  int *ptr = myArray; // Create and initialise pointer 
  
  // Fill with odd numbers 
  for (i = 0; i < myArraySize; i++) {
    *(ptr + i) = 2 * i + 1; // Pointers used to fill array with integer series 
  }

  // Output array elements to console
  for (i = 0; i < myArraySize; i++) {
    cout << (*ptr) << " ";
    ptr++;
  }

  cout << endl;

  // move pointer to last element 
  ptr = myArray + myArraySize - 1;

  // Output array reverse order
  for (i = 0; i < myArraySize; i++) {
    cout << (*ptr) << " ";
    ptr--; 
  }

  cout << endl;

  return 0;
}
