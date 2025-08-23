#include <iostream>
using std::cin;
using std::cout;
using std::endl;

// Notice the value of variable while it is in function and when it is in main function
void PassByValue(int x)
{
    cout << x << endl;
    cout << x + 5 << endl;
    cout << x + 10 << endl;
    cout << x + 15 << endl;
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

/* OUTPUT
Enter the number you want
1

1
6
11
16
1 - This means that the original value in main function is not modified when passed through a function
*/