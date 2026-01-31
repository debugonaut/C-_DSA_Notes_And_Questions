#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(n)), res_arr(n, vector<int>(n));
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            res_arr[j][n - 1 - i] = arr[i][j];
        }
    }

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            cout << res_arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}