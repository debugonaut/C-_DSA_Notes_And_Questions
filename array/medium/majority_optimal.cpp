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

    int cnt = 0;
    int el;
    sort(arr.begin(), arr.end());

    for (int i = 0; i < arr.size(); i++)
    {
        if (cnt == 0)
        {
            cnt = 1;
            el = arr[i];
        }
        else if (arr[i] == el)
        {
            cnt++;
        }
        else
        {
            cnt--;
        }
    }
    int cnt1 = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == el)
        {
            cnt1++;
        }
    }
    if (cnt1 > (arr.size() / 2))
    {
        cout << el;
    }
    else
    {
        cout << "No majority element found";
    }
}