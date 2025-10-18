#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cout << "Enter your number \n";
    cin >> n;

    cout << "Enter your array (one unique, rest duplicate)";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int hash[1000] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }

    for (int i = 0; i < n; i++)
    {
        if (hash[arr[i]] == 1)
        {
            cout << arr[i];
            break;
        }
    }
}
