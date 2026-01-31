#include <iostream>
using namespace std;

int Buy_stocks(vector<int> &arr, int n)
{
    int smallest = arr[0], biggest = 0, counter, counter2;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
            counter = i;
        }
    }

    if (counter == arr[n - 1])
    {
        return 0;
    }
    else
    {

        for (int i = counter; i < n; i++)
        {
            if (arr[i] > biggest)
            {
                biggest = arr[i];
                counter2 = i;
            }
        }
        int profit = arr[counter2] - arr[counter];
        return profit;
    }
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
    int result = Buy_stocks(arr, n);
    cout << result;
}