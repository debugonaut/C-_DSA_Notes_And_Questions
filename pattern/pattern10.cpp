#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void SymmetricTriangle(int n)
{
    // Increasing part
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    // Decreasing part
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number of lines you want in your pattern\n";
    cin >> n;
    SymmetricTriangle(n);
}

/*
OUTPUT
Enter the number of lines you want in your pattern
5
*
**
***
****
*****
****
***
**
*

*/