#include <iostream>
using std::cin;
using std::cout;
using std::endl;
void Palindrome(int n)
{
    int k = n;
    int reverse = 0, digit;
    for (; n > 0;)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n /= 10;
    }
    if (reverse == k)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not Palindrome";
    }
}
int main()
{
    int n;
    cout << "Enter the number\n";
    cin >> n;
    Palindrome(n);
    return 0;
}
