#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;

class ArmstrongChecker
{
private:
    int number;

    int DigitCount()
    {
        int n = number;
        int count = 0;
        while (n > 0)
        {
            count++;
            n /= 10;
        }
        return count;
    }

public:
    
    ArmstrongChecker(int n)
    {
        number = n;
    }

    
    void CheckArmstrong()
    {
        int count = DigitCount();
        int n = number;
        int digit, sum = 0;

        while (n > 0)
        {
            digit = n % 10;
            sum += pow(digit, count);
            n /= 10;
        }

        if (sum == number)
        {
            cout << "Armstrong" << endl;
        }
        else
        {
            cout << "Not Armstrong" << endl;
        }
    }
};

int main()
{
    int n;
    cout << "Enter your number\n";
    cin >> n;

    ArmstrongChecker checker(n);
    checker.CheckArmstrong();

    return 0;
}

