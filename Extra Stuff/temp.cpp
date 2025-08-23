#include <iostream>
#include <math.h>
using std::cin;
using std::cout;
using std::endl;
void DigitCount(int n)
{
    int division, count = 1;
    for (int i = 0; n > 0; i++)
    {
        division = n / 10;
        if (division > 0)
        {
            count++;
        }
        n /= 10;
    }
}
void Armstrong(int n, int count)
{
    int digit, cube = 0, k = n;
    while (n > 0)
    {
        digit = n % 10;
        cube = cube + pow(digit, count);
        n /= 10;
    }
    if (cube == k)
    {
        cout << "Armstrong";
    }
    else
    {
        cout << "Not Armstrong";
    }
}

int main()
{
    int n, count;
    cout << "Enter your number\n";
    cin >> n;
    Armstrong(n, count);
    DigitCount(n, count);
    return 0;
}