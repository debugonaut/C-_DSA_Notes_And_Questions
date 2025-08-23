#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int second_largest(int arr[], int n)
{
    // Optimal method
    int largest = arr[0];
    int Second_largest = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            Second_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > Second_largest)
        {
            Second_largest = arr[i];
        }
    }
    return Second_largest;
}
int second_smallest(int arr[], int n)
{
    int smallest = arr[0];
    int Second_smallest = INT8_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            Second_smallest = smallest;
            smallest = arr[i];
        }

        else if (arr[i] != smallest && arr[i] < Second_smallest)
        {
            Second_smallest = arr[i];
        }
    }
    return Second_smallest;
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

    int result1 = second_largest(arr, n);
    int result2 = second_smallest(arr, n);

    cout << "Second largest : " << result1 << endl;
    cout << "Second smallest : " << result2;
    return 0;
}