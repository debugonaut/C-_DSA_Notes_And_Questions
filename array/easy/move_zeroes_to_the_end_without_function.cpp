#include <iostream>
#include <algorithm>
using std::cin;
using std::cout;
using std::endl;
using std::swap;
int main()
{
    int n;
    cout << "Enter the number of elements you want in your array \n";
    cin >> n;

    int arr[n];
    cout << "Enter array elements \n";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            j = i;
            break;
        }
    }

    for (int i = j + 1; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    return 0;
}