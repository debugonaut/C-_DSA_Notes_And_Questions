#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
int main()
{

    int n, j = 0;

    cout << "Enter the number of elements you want in your array \n";
    cin >> n;

    int arr[n];
    cout << "Enter array elements \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> v1;
    vector<int> v2;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
            v1.push_back(arr[i]);
        else
            v2.push_back(arr[i]);
    }

    // merge v1 and v2 back into arr
    int idx = 0;
    for (int x : v1)
    {
        arr[idx++] = x;
    }
    for (int x : v2)
    {
        arr[idx++] = x;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}