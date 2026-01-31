#include <iostream>
#include <vector>
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

    int count0 = 0, count1 = 0, count2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            count0++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            count1++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 2)
        {
            count2++;
        }
    }

    arr.clear();

    for (int i = 0; i < count0; i++)
    {
        arr.push_back(0);
    }
    for (int i = 0; i < count1; i++)
    {
        arr.push_back(1);
    }
    for (int i = 0; i < count2; i++)
    {
        arr.push_back(2);
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}