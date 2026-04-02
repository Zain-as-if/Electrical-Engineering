#include <iostream> 

using namespace std;

int getInput(void);
float calcMean(float, float, float);
void displayResult(float);

int main(void) {
  float num1, num2, num3, result;

  cout << "This program calculates the average of 3 numbers" << endl;

  cout << "Please enter number 1: " << endl;
  num1 = getInput();
  cout << "Please enter number 2: " << endl;
  num2 = getInput();
  cout << "Please enter number 3: " << endl;
  num3 = getInput();

  result = calcMean (num1, num2, num3);
  displayResult(result);
}

int getInput(void) {
  float myNumber;
  cin >> myNumber;
  return myNumber;
}

float calcMean(float num1, float num2, float num3) {
  float result = (num1 + num2 + num3) / 3.0;
  return result;
}

void displayResult(float result) {
  cout << "The mean of the three numbers entered is " << result << endl;
}
