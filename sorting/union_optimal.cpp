#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    int n1, n2, i = 0, j = 0;
    cout << "Enter the number of elements you want in your first array \n";
    cin >> n1;

    vector<int> arr(n1);
    cout << "Enter your array elements (sorted)\n";
    for (int i = 0; i < n1; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the number of elements you want in your second array \n";
    cin >> n2;

    vector<int> arr2(n2);
    cout << "Enter your array elements (sorted)\n";
    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }

    vector<int> union_array;

    while (i < n1 && j < n2)
    {
        if (arr[i] <= arr2[j])
        {
            if (union_array.empty() || union_array.back() != arr[i])
            {
                union_array.push_back(arr[i]);
            }
            i++;
        }
        else
        {
            if (union_array.empty() || union_array.back() != arr2[j])
            {
                union_array.push_back(arr2[j]);
            }
            j++;
        }
    }

    while (i < n1)
    {
        if (union_array.empty() || union_array.back() != arr[i])
        {
            union_array.push_back(arr[i]);
        }
        i++;
    }

    while (j < n2)
    {
        if (union_array.empty() || union_array.back() != arr2[j])
        {
            union_array.push_back(arr2[j]);
        }
        j++;
    }

    cout << "Union of the arrays: \n";
    for (int val : union_array)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
