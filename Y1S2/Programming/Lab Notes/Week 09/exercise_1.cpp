#include <iostream>
using namespace std;

struct bookInfo {
  string title;
  string author;
  float price;
};

bookInfo getBookInfo(void);
void printBookInfo(bookInfo);

int main(void) {
  bookInfo book1, book2;

  book1 = getBookInfo();
  book2 = getBookInfo();

  printBookInfo(book1);
  printBookInfo(book2);

  return 0;
}

bookInfo getBookInfo(void) {
  bookInfo temp;

  cout << "Enter book title: ";
  getline(cin, temp.title);

  cout << "Enter author name: ";
  getline(cin, temp.author);

  cout << "Enter price: ";
  cin >> temp.price;

  cin.ignore();

  return temp;
}

void printBookInfo(bookInfo myBook) {
  cout << "\n--- Book Info ---" << endl;
  cout << "Title : " << myBook.title << endl;
  cout << "Author : " << myBook.author << endl;
  cout << "Price : " << myBook.price << endl;
}
