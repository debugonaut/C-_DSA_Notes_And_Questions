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

    // Right rotate by 1
    for (int i = 0; i < n - 1; i++)
    {
        int temp = arr[n - 1];
        arr[n - 1] = arr[i];
        arr[i] = temp;
    }

    // Print rotated array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
