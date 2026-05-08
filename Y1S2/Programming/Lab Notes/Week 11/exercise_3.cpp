#include <fstream> 
#include <iostream>
#include <ostream>

using namespace std;

int main(void) {
  int UID, requestedUID;
  char firstName[20];
  char lastName[20];

  fstream myFile;
  myFile.open("names.txt");

  // Check if file opened successfully
  if (!myFile) {
    cout << "Error opening file!" << endl;
    return 1;
  }

  cout << "Enter requested UID: ";
  cin >> requestedUID;

  do {
    myFile >> UID >> firstName >> lastName;

    if (myFile.eof()) {
      cout << "UID not found!" << endl;
      return 1;
    }
  } while(UID != requestedUID);

  cout << firstName << " " << lastName << endl;
  
  myFile.close();
}
