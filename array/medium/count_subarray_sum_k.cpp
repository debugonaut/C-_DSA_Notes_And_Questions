#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n, maxlen = 0;
    cin >> n;
    vector<int> arr(n);
    
    for(int i = 0; i<n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    int sum = arr[0];
    int left = 0, right = 0;
    while(right < n)
    {
        if(sum == k)
        {
            maxlen = max(maxlen, right - left + 1);
        }
        
        while(left <= right && sum > k)
        {
            sum -= arr[left];
            left++;
        }
        
        right++;
        if(right < n)
        {
            sum += arr[right];
        }
    }
    cout << maxlen;
}