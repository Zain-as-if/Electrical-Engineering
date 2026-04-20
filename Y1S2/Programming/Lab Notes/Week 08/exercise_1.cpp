#include <iostream>

using namespace std;

int main(void) {
  //const in myArraySize = 10;
  //int myArray[myArraySize]
  int myArray[8] = {2, 3, 5, 7, 11, 13, 17, 19};
  int myIndex;
  do {
    cout << "Enter array index [0-7]:";
    cin >> myIndex;
  } while (myIndex > 7 || myIndex < 0);
  cout << "Array element " << myIndex << " is " << myArray[myIndex] << endl;
}
