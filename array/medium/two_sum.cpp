#include <iostream>
using namespace std;

int main()
{
    int n, key;
    cout << "Enter the number of elements you want in your array \n";
    cin >> n;
    int arr[n];
    cout << "Enter the array elements \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bool check = false;
    cout << "Enter the two sum number \n";
    cin >> key;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == key)
            {
                cout << "[" << i << ", " << j << "]";
                check = true;
                break;
            }
            if (check == true)
            {
                break;
            }
        }
        if (check == true)
        {
            break;
        }
    }
}