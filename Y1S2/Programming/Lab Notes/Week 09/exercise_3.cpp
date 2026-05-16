#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

struct card {
  string rank[13];
  string suit[4];
};

int main(void) {
  int value1, value2;
  card myCard = { {"Ace", "Two", "Three", "Four", "Five", "Six", "Seven", 
  "Eight", "Nine", "Ten", "Jack", "Queen", "King" },
       {"Hearts", "Diamonds", "Clubs", "Spades"} };
  
  srand(time(0));

  for (int i = 0; i < 10; i++) {
    value1 = rand() % 13; 
    value2 = rand() % 4;

    cout << myCard.rank[value1] << " of " << myCard.suit[value2] << endl;
  }
}
