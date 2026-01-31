#include <iostream>
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

    for (int i = 0; i < n; i++)
    {
        bool leader = true;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                leader = false;
                break;
            }
        }
        if (leader == true)
        {
            finalarr.emplace_back(arr[i]);
        }
    }

    for (auto it : finalarr)
    {
        cout << it << " ";
    }
}