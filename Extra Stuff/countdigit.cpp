#include <iostream>
using std::cin;
using std::cout;
using std::endl;
void CountDigit(int n)
{
    int division, count = 1;
    if (n < 0)
    {
        n = -n;
    }
    for (int i = 0; n > 0; i++)
    {
        division = n / 10;
        if (division > 0)
        {
            count++;
        }
        n /= 10;
    }
    cout << count;
}
int main()
{
    int n;
    cout << "Enter your number\n";
    cin >> n;
    CountDigit(n);
    return 0;
}

/*
OUTPUT

Enter your number
4
1

*/
