#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int FactorialRecursion(int fact, int n)
{
    if (n == 0)
    {
        return fact;
    }
    return FactorialRecursion(fact * n, n - 1);
}
int main()
{
    int n;
    cout << "Enter your Number \n";
    cin >> n;
    int result = FactorialRecursion(1, n);
    cout << "Factorial is :" << result;
    return 0;
}