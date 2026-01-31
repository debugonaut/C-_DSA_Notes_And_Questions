#include <iostream>
using namespace std;

int main()
{
    int a = 123, count = 0;
    while (a > 0)
    {

        a /= 10;
        count++;
    }
    cout << count;
}