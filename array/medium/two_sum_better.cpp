#include <iostream>
#include <map>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> &arr, int target)
{
    int n = arr.size();
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        int num = arr[i];
        int moreNeeded = target - num;
        if (mpp.find(moreNeeded) != mpp.end())
        {
            return {mpp[moreNeeded], i};
        }
        mpp[num] = i;
    }
    return {-1, -1};
}

int main()
{
    int n, key;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cin >> key;

    vector<int> result = twoSum(arr, key);

    if (result[0] == -1)
        cout << "No two numbers add up to the target.\n";
    else
        cout << "Indices: " << result[0] << " and " << result[1] << endl;

    return 0;
}
