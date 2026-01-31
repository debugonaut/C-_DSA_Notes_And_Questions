#include<iostream>
using namespace std;

int main()
{
    int m , n; 
    cin >> m >> n;
    int arr[m][n];
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m ; j++)
        {
            cin >> arr[i][j];
        }
    }
     // 'i' contains rows
     // 'j' contains columns

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m ; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // at arr[0][0] = 1
    // at arr[0][1] = 2
    // at arr[0][2] = 3
    // at arr[1][0] = 4
    // at arr[1][1] = 5
    // at arr[1][2] = 6
    // at arr[2][0] = 7
    // at arr[2][1] = 8
    // at arr[2][2] = 9

}