
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void reverseNum(int n)
{
    int sign, reverse=0, digit;
    if (n < 0)
    {
        sign = -1;
        n = -n;
    }
    else
    {
        sign = 1;
    }
    while (n > 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }
    cout << reverse * sign;
}

int main()
{
    int n;
     cout << "Enter your number\n";
    cin >> n;
    reverseNum(n);
    return 0;
}
