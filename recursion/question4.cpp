#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int SumTillNRecursion(int sum, int i, int n)
{
    if (i > n)
    {
        return sum;
    }
    return SumTillNRecursion(sum + i, i + 1, n);
}
int main()
{
    int n;
    cout << "Enter your number \n";
    cin >> n;
    int result = SumTillNRecursion(0, 1, n);
    cout << "Sum is : " << result;
    return 0;
}