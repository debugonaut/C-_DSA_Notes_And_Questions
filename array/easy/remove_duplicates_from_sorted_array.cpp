#include <iostream>
#include <set>
using std::cin;
using std::cout;
using std::endl;
using std::set;

void Optimal_solution(int arr[], int n)
{
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (arr[j] != arr[i])
        {
            arr[i + 1] = arr[j];
            i++;
        }
    }
    i = i + 1;
    int k = 0;

    cout << "Your array after removing the duplicates is \n";
    while (i > 0)
    {
        cout << arr[k] << " ";
        k++;
        i--;
    }
}

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

    Optimal_solution(arr, n);
    return 0;
}