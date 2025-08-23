#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void DescendingSameAlphabet(int n)
{
    char c = 65;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << c << " ";
        }
        c++;
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "Enter the number of lines of pattern you want \n";
    cin >> n;
    DescendingSameAlphabet(n);
    return 0;
}
