#include <iostream>
#include<map>
#include <vector>
using namespace std;

int Longest_subarray(vector<int> &arr, int k)
{
    map<long long, int> preSumMap;
    long long sum = 0;
    int maxLen = 0;
    for(int i = 0; i<arr.size(); i++)
    {
        sum += arr[i];
        if(sum==k)
        {
            maxLen = max(maxLen, i+1);
        }
        int rem = sum - k;
        if(preSumMap.find(rem) != preSumMap.end())
        {
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
        }
        preSumMap[sum] = i;
    }
    return maxLen;
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
    int k;
    cin >> k;

    int result = Longest_subarray(arr,k);
    cout << result;
}