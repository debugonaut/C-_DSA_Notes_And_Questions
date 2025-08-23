#include <iostream>
using std::cin;
using std::cout;
using std::endl;
void DoublePyramidNumber(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        cout << "\n";
    }
}
int main()
{
    int n;
    cout << "Enter the number of lines you want in your program\n";
    cin >> n;
    DoublePyramidNumber(n);
    return 0;
}
