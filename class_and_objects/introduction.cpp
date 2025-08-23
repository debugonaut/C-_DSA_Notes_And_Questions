#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

class Book
{
public:
  string title;
  string author;
  int year;
};

int main()
{
  Book User1;
  User1.title = "Harry Potter";
  User1.author = "JK Rowling";
  User1.year = 1999;

  cout << User1.title << endl
       << User1.author << endl
       << User1.year;

  return 0;
}