#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void DescendingAlphabet(int n)
{

    for (int i = 1; i <= n; i++)
    {
        char c = 65;
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << c << " ";
            c++;
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "Enter the number of lines of pattern you want \n";
    cin >> n;
    DescendingAlphabet(n);
    return 0;
}
