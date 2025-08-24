#include <iostream>
using std::cin;
using std::cout;
using std::endl;
int main()
{
    int n;
    cout << "Enter the number of elements you want in your array \n";
    cin >> n;

    int arr[n];
    cout << "Enter your array elements \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int temp = arr[0];

    for (int i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    arr[n - 1] = temp;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}