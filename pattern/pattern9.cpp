#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void Kite(int n)
{

    for (int i = 1; i <= n; i++) // This is from pattern7.cpp as we can just combine two patterns to make the desired output
    {

        for (int s = 1; s <= n - i; s++)
        {
            cout << " ";
        }

        for (int j = 1; j <= (i * 2) - 1; j++)
        {
            cout << "*";
        }

        cout << "\n";
    }

    for (int i = 0; i < n; i++) // This is from pattern8.cpp as we can just combine two patterns to make the desired output
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "Enter the number of lines you want \n";
    cin >> n;
    Kite(n);
}

/* OUTPUT

Enter the number of lines you want
5
    *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *
*/