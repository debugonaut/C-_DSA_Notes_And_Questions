#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void PrintFromNRecursion(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << " ";
    PrintFromNRecursion(n - 1);
}

int main()
{
    int n;
    cout << "Enter the number from which you want to reverse print: ";
    cin >> n;
    PrintFromNRecursion(n);
    return 0;
}
