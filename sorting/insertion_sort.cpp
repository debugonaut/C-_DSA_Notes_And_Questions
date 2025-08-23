#include <iostream>
using std::cin;
using std::cout;
using std::endl;
int main()
{
    int n;
    cout << "Enter the number of elements you want in your array \n";
    cin >> n;

    int a[n];
    cout << "Enter your array \n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        int j = i;
        while (j > 0 && a[j - 1] > a[j])
        {
            int temp = a[j - 1];
            a[j - 1] = a[j];
            a[j] = temp;

            j--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}