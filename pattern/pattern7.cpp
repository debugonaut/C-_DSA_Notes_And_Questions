#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void PyramidTriangle(int n)
{
    for (int i = 1; i <= n; i++)
    {

        for (int s = 1; s <= n - i; s++)
        {
            cout << " ";
        }

        for (int j = 1; j <= (i * 2) - 1; j++)
        {
            cout << "*";
        }

        cout << "\n";
    }
}

int main()
{
    int x;
    cout << "Enter the number of stars you want in the pattern\n";
    cin >> x;
    PyramidTriangle(x);
}
