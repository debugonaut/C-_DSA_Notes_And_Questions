

// Bubble Sort ---> Pushes the biggest number to the end, opposite of selection sort.
// {15,3,8,9,3} ---> {3,15,8,9,3} ---> {3,8,15,9,3} ....... {3,3,8,9,15}

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
    cout << "Enter the array elements \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Sorted array is : \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}