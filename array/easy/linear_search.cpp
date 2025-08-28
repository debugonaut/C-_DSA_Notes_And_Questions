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

    int key, input;
    cout << "Enter the number you want to search \n";
    cin >> input;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == input)
        {
            key = i;
            break;
        }
    }
    cout << "Your element found at " << key + 1
         << " location in the array";
    return 0;
}