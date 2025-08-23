#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void StarDescending(int n)
{

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}
int main()
{
    int n;
    cout << "Enter the number of Lines you want in Star Descending Pattern\n";
    cin >> n;
    StarDescending(n);
}