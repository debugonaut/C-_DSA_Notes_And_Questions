#include <iostream>
#include <vector>
using namespace std;

string twoSum(vector<int> &arr, int key, int n)
{
    int left = 0, right = n - 1;
    sort(arr.begin(), arr.end());
    while (left < right)
    {
        int sum = arr[left] + arr[right];
        if (sum == key)
        {
            return "YES";
        }
        else if (sum < key)
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    return "NO";
}

int main()
{
    int n, key;
    cout << "Enter the number of elements you want in your array \n";
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the number to be checked \n";
    cin >> key;

    string result = twoSum(arr, key, n);

    cout << result;
}