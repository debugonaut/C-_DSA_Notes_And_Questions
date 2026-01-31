#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> finalarr(n);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            finalarr[2 * i] = arr[i];
        }
        else
        {
            finalarr[2 * i + 1] = arr[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << finalarr[i] << " ";
    }
}