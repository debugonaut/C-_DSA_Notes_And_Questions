#include <iostream>
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
    int count;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count > (n / 2))
        {
            cout << arr[i];
            flag = true;
            break;
        }
    }
    if (!flag)
    {
        cout << "No majority element found \n";
    }
}
