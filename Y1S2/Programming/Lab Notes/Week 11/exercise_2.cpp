#include <fstream>
using namespace std;

int main(void) {
  int i;
  int F0 = 0, F1 = 1, F; 

  fstream myFile;
  myFile.open("Fibonacci.txt", ios::out);

  myFile << F0 << endl;
  myFile << F1 << endl;
  
  for (i = 2; i < 30; i++) {
    F = F1 + F0;
    myFile << F << endl;
    F0 = F1;
    F1 = F;
  }
}
