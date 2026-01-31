#include <iostream>
#include <vector>
using namespace std;

vector<int> plusOne(vector<int> &digits)
{
    int n = digits.size();
    vector<int> temp(n);

    bool allTrue = true;

    for (int i = 0; i < n; i++)
    {
        if (digits[i] != 9)
        {
            allTrue = false;
            break;
        }
    }
    if (allTrue)
    {
        digits.clear();
        digits.push_back(1);
        for (int i = 0; i < n; i++)
        {
            digits.push_back(0);
        }
        return digits;
    }

    else
    {

        int carry = 1;
        for (int i = n - 1; i >= 0 && carry; i--)
        {
            int sum = digits[i] + carry;
            digits[i] = sum % 10;
            carry = sum / 10;
        }

        return digits;
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
    vector<int> result = plusOne(arr);

    for (auto it : result)
    {
        cout << it << " ";
    }
}