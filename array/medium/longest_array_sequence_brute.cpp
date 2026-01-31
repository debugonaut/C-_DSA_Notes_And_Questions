#include <iostream>
using namespace std;

bool LinearSearch(vector<int> &arr, int x)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count, maxCount;
    for (int i = 0; i < n; i++)
    {
        int x = arr[i];
        count = 0;
        while (LinearSearch(arr, x))
        {
            x = x + 1;
            count++;
        }
        if (count > maxCount)
        {
            maxCount = count;
        }
    }

    cout << maxCount;
}
