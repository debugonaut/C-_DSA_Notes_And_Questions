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
    int n,d;
    cout << "Enter the number of elements you want in your array \n";
    cin >> n;

    int arr[n];

    // Initialising the array 
    for(int i = 0; i<n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter by how many places you want your array to be modified to the left \n";
    cin >> d;

    if(d>n)
    {
        d= d%n;
    }
    int temp_arr[d];

    // Initialising temporary array to store the d-1 elements

    for(int i = 0; i<d; i++)
    {
        temp_arr[i] = arr[i];
    }

    // Shifting back the array by d places
    int k = d;
    for(int i = d; i<n ; i++)
    {
        arr[i-k] = arr[i];
    }
    
     // Shifting the temporary array back to the original array
    for(int i = n-d, r=0; i<n; i++, r++) {
    arr[i] = temp_arr[r];
}


     for(int t = 0; t<n; t++)
     {
         cout << arr[t] << " ";
     }

    
}