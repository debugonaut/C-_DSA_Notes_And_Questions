#include <iostream>
using std::cin;
using std::cout;
using std::endl;

bool IsSorted(int n, int arr[])
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] >= arr[i - 1])
        {
        }
        else
        {
            return false;
        }
    }
    return true;
}
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

    bool result = IsSorted(n, arr);

    cout << "If your array is sorted = 1 ---- If not = 0" << endl
         << result;
    return 0;
}