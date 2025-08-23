#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void ReverseAscendingNumber(int n)
{
    {
        // initial no. of spaces in row 1.
        int spaces = 2 * (n - 1);

        // Outer loop for the number of rows.
        for (int i = 1; i <= n; i++)
        {

            // for printing numbers in each row
            for (int j = 1; j <= i; j++)
            {
                cout << j;
            }

            // for printing spaces in each row
            for (int j = 1; j <= spaces; j++)
            {
                cout << " ";
            }

            // for printing numbers in each row
            for (int j = i; j >= 1; j--)
            {
                cout << j;
            }

            // As soon as the numbers for each iteration are printed, we move to the
            // next row and give a line break otherwise all numbers
            // would get printed in 1 line.
            cout << endl;

            // After each iteration nos. increase by 2, thus
            // spaces will decrement by 2.
            spaces -= 2;
        }
    }
}
int main()
{
    int n;
    cout << "Enter the number of lines you want in your pattern \n";
    cin >> n;
    ReverseAscendingNumber(n);
    return 0;
}
