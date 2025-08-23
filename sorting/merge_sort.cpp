#include<iostream>
#include<utility>
#include<string>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::pair;
using std::vector;


int main()
{
    int n;
    cout << "Enter the number of elements in your array \n";
    cin >> n;

    int arr[n];
    cout << "Enter the array elements \n";
    for(int i = 0; i<n; i++)
    {
        cin >> arr[i];
    }
    
}