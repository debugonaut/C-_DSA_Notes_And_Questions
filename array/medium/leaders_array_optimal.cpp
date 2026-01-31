#include <iostream>
#include <vector>
#include <algorithm> // for std::max_element
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n), finalarr;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int maxSum = INT_MIN;

    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] > maxSum)
        {
            finalarr.push_back(arr[i]);
        }
        maxSum = max(maxSum, arr[i]);
    }

    for (auto it : finalarr)
    {
        cout << it << " ";
    }

    return 0;
}
