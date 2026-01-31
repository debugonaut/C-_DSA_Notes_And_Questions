#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

void duplicate(int n, vector<int> arr)
{
    unordered_map<int, int> hash;

    // Count frequency
    for (int i = 0; i < n; i++) {
        hash[arr[i]]++;
    }

    // Check for duplicates
    for (auto it : hash) {
        if (it.second > 1) {
            cout << "Duplicate\n";
            return;
        }
    }

    cout << "Not duplicate\n";
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    duplicate(n, arr);
}
