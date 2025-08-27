#include <iostream>
using namespace std;

void reversePart(int arr[], int l, int r) {
    while (l < r) {
        swap(arr[l], arr[r]);
        l++;
        r--;
    }
}

void rotateArray(int arr[], int n, int k) {
    k = k % n;

    // Step 1: reverse first k elements
    reversePart(arr, 0, k - 1);

    // Step 2: reverse the rest
    reversePart(arr, k, n - 1);

    // Step 3: reverse whole array
    reversePart(arr, 0, n - 1);
}

int main() {
    int n, d;
    cout << "Enter the number of elements you want in your array\n";
    cin >> n;

    int arr[n];
    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter by how many places you want your array to be modified to the left\n";
    cin >> d;

    rotateArray(arr, n, d);

    cout << "Rotated Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
