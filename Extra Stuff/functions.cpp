#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int SumOfTwo(int x, int y)
{
    int z = x + y;
    cout << "Sum of two numbers is " << z << endl;
    return z;
}
int main()
{
    int x, y;
    for (int i = 0; i < 2; i++)
    {
        cout << "Enter two numbers \n";
        cin >> x >> y;
        SumOfTwo(x, y);
    }
}