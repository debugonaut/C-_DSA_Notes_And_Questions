#include <iostream>
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

    vector<int> final(n);
    int positive = 0, negative = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            final[positive] = arr[i];
            positive += 2;
        }
        else
        {
            {
                final[negative] = arr[i];
                negative += 2;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << final[i] << " ";
    }
}