#include <iostream>
#include <climits>

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
    // Kadane's Algorithm
    int sum = 0, maxSum = INT_MIN, start, ansStart, ansEnd;
    for (int i = 0; i < n; i++)
    {
        if (sum == 0)
        {
            start = i;
        }
        sum += arr[i];

        if (sum > maxSum)
        {
            maxSum = sum;
            ansStart = start;
            ansEnd = i;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }
    cout << maxSum << endl;
    cout << ansEnd - ansStart + 1 << endl;
    for (int i = ansStart; i < ansEnd; i++)
    {
        cout << arr[i] << " ";
    }
}