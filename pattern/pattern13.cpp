#include <iostream>
using std::cin;
using std::cout;
using std::endl;
void NumericalAscendingTriangle(int n)
{
    int k = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << k << " ";
            k++;
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "Enter the number of lines you want in Numerical Ascending Triangle \n";
    cin >> n;
    NumericalAscendingTriangle(n);
    return 0;
}