#include <fstream>
using namespace std;

int main(void) {
  fstream myFile;
  myFile.open("data.txt", ios::app);
  myFile << "Wagwan!" << endl;
}
