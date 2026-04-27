#include <iostream>
#include <fstream>
using namespace std;

// Function declaration
void bubbleSort(double *numberArray, int size);
double calculateMean(double *numberArray, int size);
bool calculateMode(double *numberArray, int size, double &mode);
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
  cout << "Enter filename (limit 20 characters): ";
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

  // checks if file is empty or not
  if (size == 0) {
    cout << "Error: File is empty or containts no valid data." << endl;
    return 1;
  }

  if (size >= MAX_SIZE) {
    cout << "Warning: Maximum data size reached (size = 10000), some data may be ignored." << endl;
  }

  // closes file 
  inputFile.close();

  // call functions 
  bubbleSort(numberArray, size);
  mean = calculateMean(numberArray, size);
  median = calculateMedian(numberArray, size);
  bool foundMode = calculateMode(numberArray, size, mode);

  // display info
  cout << "--- Info ---" << endl;
  cout << "Length: " << size << endl;
  cout << "Mean: " << mean << endl;
  cout << "Median: " << median << endl;
  if (foundMode) {
    cout << "Mode: " << mode << endl;
  } else {
    cout << "Mode: N/A (No repeated values)" << endl;
  }
  cout << "Minimum: " << numberArray[0] << endl;
  cout << "Maximum: " << numberArray[size-1] << endl;

  // asks user for sorted array file
  cout << endl << "Enter the name of the file you want the sorted data (limit 20 characters): ";
  cin >> exportFilename;

  fstream exportFile;
  exportFile.open(exportFilename, ios::out);

  if (!exportFile) {
    cout << "Error: Couldn't create output file." << endl;
    return 1;
  }

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

  // checks if size is = 0 so no division by zero
  // shouldn't run as above error handling for empty file opening
  if (size == 0) {
    return 1;
  }

  // cumulative total
  for (int i = 0; i < size; i++) {
    sum += numberArray[i]; 
  }

  return sum / size;
}


bool calculateMode(double *numberArray, int size, double &mode) {
  int maxCount = 1;
  int count = 1;
  mode = numberArray[0];

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

  // if there is no mode returns false which will then output no mode in main 
  if (maxCount == 1) {
    return false;
  }
  
  return true;
}

double calculateMedian(double *numberArray, int size) {
  if (size % 2 == 0) {
    return ((numberArray[(size/2) - 1] + numberArray[size/2]) / 2.0);
  } else {
    return (numberArray[size/2]);
  }
}
