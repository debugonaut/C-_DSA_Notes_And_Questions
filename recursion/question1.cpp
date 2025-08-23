#include <iostream>
#include <utility>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::pair;
using std::string;

void PrintNameRecursion(int i, string a, int n)
{

    if (i > n)
    {
        return;
    }
    cout << a << endl;

    PrintNameRecursion(i + 1, a, n);
}
int main()
{
    string a;
    int n;
    cout << "Enter your name\n";
    cin >> a;
    cout << "Enter the number of times you want to print the Name\n";
    cin >> n;
    PrintNameRecursion(1, a, n);
}