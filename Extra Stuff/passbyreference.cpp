#include <iostream>
using std::cin;
using std::cout;
using std::endl;

// Notice the value of variable while it is in function and when it is in main function
void PassByValue(int &x) // '&' Operator passes the value of address of x thus modifying it's original value
{
    cout << x << endl;
    x += 5;
    cout << x << endl;
    x += 10;
    cout << x << endl;
    x += 15;
    cout << x << endl;
}
int main()
{
    int x;
    cout << "Enter the number you want\n";
    cin >> x;
    PassByValue(x);

    cout << x << endl;
    return 0;
}

/*OUTPUT
Enter the number you want
5

5
10
20
35
35 - Modified Original Value
*/