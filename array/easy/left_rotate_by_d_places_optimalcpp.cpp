#include <iostream>
#include <algorithm> // for reverse function

using namespace std;

void reversePart(int arr[], int l, int r)
{
    while (l < r)
    {
        swap(arr[l], arr[r]);
        l++;
        r--;
    }
}

void rotateArray(int arr[], int n, int k)
{
    k = k % n;

    reverse(arr, arr + k);
    reverse(arr + k, arr + n);
    reverse(arr, arr + n);

    //  reverse function in case it is asked
    // void myReverse(int arr[], int start, int end) {
    //     while (start < end) {
    //         int temp = arr[start];
    //         arr[start] = arr[end];
    //         arr[end] = temp;
    //         start++;
    //         end--;
    //     }
    // }
}

int main()
{
    int n, d;
    cout << "Enter the number of elements you want in your array\n";
    cin >> n;

    int arr[n];
    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter by how many places you want your array to be modified to the left\n";
    cin >> d;

    rotateArray(arr, n, d);

    cout << "Rotated Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
