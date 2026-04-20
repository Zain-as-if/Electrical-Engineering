#include <fstream>
#include <iostream>

using namespace std;

int main(void) {
  int fibonacci[30];

  fstream myFile;
  myFile.open("Fibonacci.txt");

  for (int i = 0; i < 30; i++) {
    myFile >> fibonacci[i];
  }

  for (int i = 0; i < 30; i++) {
    cout << fibonacci[i] << endl;
  }

  myFile.close();

  return 0;
}
