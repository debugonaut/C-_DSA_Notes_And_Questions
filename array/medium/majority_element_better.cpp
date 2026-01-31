#include <iostream>
#include <map>
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
    map<int, int> map1;
    for (int i = 0; i < n; i++)
    {
        map1[arr[i]]++;
    }
    for (auto it : map1)
    {
        if (it.second > (map1.size() / 2))
        {
            cout << it.first;
        }
    }
}