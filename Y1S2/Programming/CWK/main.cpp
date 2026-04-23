#include <iostream>
#include <fstream>

using namespace std;

int main(void) {
  // initialise variables
  fstream myFile;
  char filename[20];
  const int MAX_SIZE = 10000;
  int numberArray[MAX_SIZE];
  int size = 0;
  int i, j;

  // user input for filename
  cout << "Enter filename: ";
  cin >> filename;

  // Opens file with name provided, read-only
  myFile.open(filename, ios::in);

  // error handling
  if (!myFile) {
    cout << "Error: Could not open file.\n";
    return 1;
  }

  // copys numbers from file to array while counting the size
  // due to larger array initialised than needed as no dynamic arrays in c++
  while (myFile >> numberArray[size] && size < MAX_SIZE) {
    size++;
  }

  cout << endl;
  return 0;
}
