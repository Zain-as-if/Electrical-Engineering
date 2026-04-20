#include <iostream>

using namespace std;

struct bookInfo {
  string title;
  string author;
  float price;
};

bookInfo getBookInfo(void);
void printBookInfo(bookInfo books[], int size);

int main(void) {
  unsigned int entries;
  bookInfo book[10];

  cout << "Enter number of entries: ";
  cin >> entries;

  if (entries > 10) {
    entries = 10;
  }

  cin.ignore();

  for (int i = 0; i < entries; i++) {
    cout << "\nEnter Details For Book " << i + 1 << endl;
    book[i] = getBookInfo();
  }

  printBookInfo(book, entries);

  return 0;
}

bookInfo getBookInfo(void) {
  bookInfo temp;

  cout << "Enter title: ";
  getline(cin, temp.title);

  cout << "Enter author: ";
  getline(cin, temp.author);

  cout << "Enter price: ";
  cin >> temp.price;

  cin.ignore();

  return temp;
}

void printBookInfo(bookInfo books[], int size) {
  cout << "\n--- Book List ---\n";
  
  for (int i = 0; i < size; i++) {
    cout << "\nBook " << i+1 << endl;
    cout << "Title : " << books[i].title << endl;
    cout << "Author : " << books[i].author << endl;
    cout << "Price : " << books[i].price << endl;
  }
}
