#include <iostream>
using namespace std;
vector<int> Next_Permutation_solution(vector<int> &arr, int index, int n)
{
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] < arr[i + 1])
        {
            index = i;
            break;
        }
    }
    if (index == -1)
    {
        reverse(arr.begin(), arr.end());
        return arr;
    }
    for (int i = n - 1; i >= index; i--)
    {
        if (arr[i] > arr[index])
        {

            swap(arr[i], arr[index]);
            break;
        }
    }
    reverse(arr.begin() + index + 1, arr.end());
    return arr;
}
int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int index = -1;
    vector<int> result = Next_Permutation_solution(arr, index, n);
    for (auto it : result)
    {
        cout << it << " ";
    }
}