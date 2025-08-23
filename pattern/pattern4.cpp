#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void NumericalAscending(int n)
{

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << i << "";
        }
        cout << "\n";
    }
}
int main()
{
    int n;
    cout << "Enter the number of Lines you want in Numerical Ascending Pattern\n";
    cin >> n;
    NumericalAscending(n);
}