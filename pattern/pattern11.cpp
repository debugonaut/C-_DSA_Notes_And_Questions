#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void BinaryTriangle(int n)
{
    int val;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            val = 0;
        }
        else
        {
            val = 1;
        }
        for (int j = 0; j <= i; j++)
        {
            cout << val << " ";
            val = 1 - val;
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number of lines want in your pattern \n";
    cin >> n;
    BinaryTriangle(n);
}