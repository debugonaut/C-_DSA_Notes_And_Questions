#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements you want in your array \n";
    cin >> n;
    int arr[n];
    cout << "Enter the array elements \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key, len = 0;
    cout << "Enter the number to summed \n";
    cin >> key;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if (sum == key)
            {
                len = max(len, j - i + 1);
            }
        }
    }
    cout << len;
}
