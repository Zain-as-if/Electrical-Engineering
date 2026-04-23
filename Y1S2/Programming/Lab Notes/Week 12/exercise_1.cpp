#include <iostream>

using namespace std;

int main(void) {
  int myValue = 0;

  // Initalise pointer here 
  int* ptr = &myValue; // pointer stores address of myValue

  cout << "Initial value of myValue: " << myValue << endl;

  // Insert pointer operation here 
  *ptr = 42; // dereference pointer and update value 

  cout << "Updated value of myValue: " << myValue << endl;

  return 0;
}
