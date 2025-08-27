#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
int main()
{

    int n, j = 0;
    vector<int> v1;
    vector<int> v2;
    cout << "Enter the number of elements you want in your array \n";
    cin >> n;

    int arr[n];
    cout << "Enter array elements \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            v1.push_back(arr[i]);
        }
        else
        {
            v2.push_back(arr[i]);
        }
    }

    vector<int>::iterator iter1 = v1.begin();
    for (auto iter1 : v1)
    {
        cout << iter1 << " ";
    }

    vector<int>::iterator iter2 = v2.begin();
    for (auto iter2 : v2)
    {
        cout << iter2 << " ";
    }

    return 0;
}