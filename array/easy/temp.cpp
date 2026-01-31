#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bool allTrue = true;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 9)
        {
            allTrue = false;
            break;
        }
    }

    if (allTrue)
    {
        cout << "Yes";
    }
    else
        cout << "No\n";

    return 0;
}
