#include<iostream>
#include<utility>
#include<string>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::pair;
using std::swap;
void ReverseArray(int i, int n, int arr[])
{
    if(i>=n/2)
    {
        return;
    }
    swap(arr[i], arr[n-i-1]);
    ReverseArray(i+1, n, arr);
}
int main()
{
    int n;
    cout << "Enter the number of elements you want in your array: \n";
    cin >> n;
    int arr[n];
    cout << "Enter the array numbers \n";
    for(int i = 0 ; i < n; i++)
    {
        cin >> arr[i];
    }
    ReverseArray(0,n,arr);
    cout << "Reversed Array is :\n";
    for(int j=0; j<n; j++)
    {
        cout << arr[j] << " ";
    }
}