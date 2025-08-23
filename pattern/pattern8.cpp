#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void ReverseTriangle(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
int main()

{
    int n;
    cout << "Enter the number of lines you want in your pattern \n";
    cin >> n;
    ReverseTriangle(n);
}