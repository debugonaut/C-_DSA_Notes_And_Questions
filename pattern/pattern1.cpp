#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void nForest(int n)
{

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}
int main()
{
    int x;
    cin >> x;
    nForest(x);
}
