#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int FibonacciNumber(int n)
{

    int a = 0, b = 1, sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        sum = a + b;
        a = b;
        b = sum;
    }
    cout << sum;
    return sum;
}
int main()
{
    int n;
    cout << "Enter the number of elements you want in your fibonacci series:  \n";
    cin >> n;
    FibonacciNumber(n);
}