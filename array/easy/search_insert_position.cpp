#include <iostream>
#include <vector>
using namespace std;

int SearchInsert(int n, vector<int> &nums, int target)
{
    sort(nums.begin(), nums.end());
    int j = 0, i = 0;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] == target)
        {
            return i;
        }
        else if (nums[i] > target)
        {
            return i;
        }
    }

    return n;
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

    int target;
    cin >> target;

    int result = SearchInsert(n, arr, target);
    cout << result;
}