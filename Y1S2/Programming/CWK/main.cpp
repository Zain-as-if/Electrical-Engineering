#include <iostream>
#include <fstream>
using namespace std;

// Function declaration
void bubbleSort(double *numberArray, int size);
double calculateMean(double *numberArray, int size);
double calculateMode(double *numberArray, int size);
double calculateMedian(double *numberArray, int size);

int main(void) {
  // initialise variables
  char inputFilename[20];
  char exportFilename[20];
  const int MAX_SIZE = 10000;
  double numberArray[MAX_SIZE];
  int size = 0;
  double minimum, maximum, mean, mode, median;

  // user input for filename
  cout << "Enter filename: ";
  cin >> inputFilename;

  // opens file with name provided, read-only
  fstream inputFile;
  inputFile.open(inputFilename, ios::in);

  // error handling
  if (!inputFile) {
    cout << "Error: Could not open file.\n";
    return 1;
  }

  // copys numbers from file to array while counting the size
  // due to larger array initialised than needed as no dynamic arrays in c++
  while (inputFile >> numberArray[size] && size < MAX_SIZE) {
    size++;
  }

  // closes file 
  inputFile.close();

  // call functions 
  bubbleSort(numberArray, size);
  mean = calculateMean(numberArray, size);
  median = calculateMedian(numberArray, size);
  mode = calculateMode(numberArray, size);

  // display info
  cout << "--- Info ---" << endl;
  cout << "Length: " << size << endl;
  cout << "Mean: " << mean << endl;
  cout << "Median: " << median << endl;
  if (mode == -1) {
    cout << "Mode: N/A" << endl;
  } else {
    cout << "Mode: " << mode << endl;
  }
  cout << "Minimum: " << numberArray[0] << endl;
  cout << "Maximum: " << numberArray[size-1] << endl;

  // asks user for sorted array file
  cout << endl << "Enter the name of the file you want the sorted data: ";
  cin >> exportFilename;

  fstream exportFile;
  exportFile.open(exportFilename, ios::out);

  // writes to file
  for (int i = 0; i < size; i++) {
    exportFile << numberArray[i];
    exportFile << " ";
  }

  // closes file 
  exportFile.close();

  cout << "File: " << exportFilename << " has been written to.";

  cout << endl;
  return 0;
}

void bubbleSort(double *numberArray, int size) {
  for (int i = 0; i < size - 1; i++) {
    double *ptr = numberArray;

    for (int j = 0; j < size - i - 1; j++) {
      if (*ptr > *(ptr + 1)) {
        double temp = *ptr;
        *ptr = *(ptr + 1);
        *(ptr + 1) = temp;
      }

      ptr++;
    }
  }
}

double calculateMean(double *numberArray, int size) {
  double sum = 0;

  // cumulative total
  for (int i = 0; i < size; i++) {
    sum += numberArray[i]; 
  }

  return sum / size;
}

double calculateMode(double *numberArray, int size) {
  int maxCount = 1;
  int count = 1;
  double mode = numberArray[0];

  for (int i = 1; i < size; i++) {
    if (numberArray[i] == numberArray[i-1]) {
      count++;
    } else {
      count = 1;
    }   
    
    if (count >= maxCount) {
      maxCount = count;
      mode = numberArray[i];
    }
  }

  // if there is no mode set mode to be -1
  if (maxCount == 1) {
    mode = -1;
  }

  return mode;
}

double calculateMedian(double *numberArray, int size) {
  if (size % 2 == 0) {
    return ((numberArray[(size/2) - 1] + numberArray[size/2]) / 2.0);
  } else {
    return (numberArray[size/2]);
  }
}
