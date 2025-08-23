#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int FibonacciNumber(int n)
{

    if (n <= 2)
    {
        switch (n)
        {
        case 0:
            cout << "Invalid";
            break;
        case 1:
            cout << "0";
            break;
        case 2:
            cout << "0 1";
            break;
        }
    }
    else
    {
        cout << "0 1 ";
        int sum = 0, a = 0, b = 1;
        for (int i = 0; i < n - 2; i++)
        {

            sum = a + b;
            cout << sum << " ";
            a = b;
            b = sum;
        }
    }
    return 0;
}
int main()
{
    int n;
    cout << "Enter the number of elements you want in your fibonacci series:  \n";
    cin >> n;
    FibonacciNumber(n);
    return 0;
}