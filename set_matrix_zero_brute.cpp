#include<iostream>
#include<vector>
using namespace std;

void makerow_zero(int row, vector<vector<int>>& arr, int n)
{
    for (int j = 0; j < n; j++) {
        if (arr[row][j] != 0) {
            arr[row][j] = -1;
        }
    }
}

void makecol_zero(int col, vector<vector<int>>& arr, int n)
{
    for (int i = 0; i < n; i++) {
        if (arr[i][col] != 0) {
            arr[i][col] = -1;
        }
    }
}

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> arr(n, vector<int>(n));

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(arr[i][j] == 0) {   // IMPORTANT
                makerow_zero(i, arr, n);
                makecol_zero(j, arr, n);
            }
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(arr[i][j] == -1) {
                arr[i][j] = 0;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
