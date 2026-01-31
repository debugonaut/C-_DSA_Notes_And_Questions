#include <iostream>
using namespace std;

int main()
{
    int n, key;
    cout << "Enter the number of elements you want in your array \n";
    cin >> n;
    int arr[n];
    cout << "Enter the array elements \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the k number \n";
    cin >> key;
    int right = 0, left = 0, sum = arr[0], maxLen = 0;

    while (right < n)
    {
        while (left >= right && sum > key)
        {
            sum -= arr[left];
            left++;
        }
        if (sum == key)
        {
            maxLen = max(maxLen, right - left + 1);
        }

        right++;
        if (right < n)
        {
            sum += arr[right];
        }
    }
    cout << maxLen;
}