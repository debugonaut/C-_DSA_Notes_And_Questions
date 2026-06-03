#include <iostream>
#include <vector>
using namespace std;

// Heapify function
void Heapify(vector<int>& arr, int i, int n) {

    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    // Check left child
    if (left < n && arr[left] > arr[largest]) {
        largest = left;
    }

    // Check right child
    if (right < n && arr[right] > arr[largest]) {
        largest = right;
    }

    // Swap and recursively heapify
    if (largest != i) {
        swap(arr[largest], arr[i]);
        Heapify(arr, largest, n);
    }
}

// Build Max Heap
void BuildMaxHeap(vector<int>& arr, int n) {

    for (int i = n / 2 - 1; i >= 0; i--) {
        Heapify(arr, i, n);
    }
}

// Heap Sort
void HeapSort(vector<int>& arr, int n) {

    for (int i = n - 1; i > 0; i--) {

        // Move current root to end
        swap(arr[0], arr[i]);

        // Heapify reduced heap
        Heapify(arr, 0, i);
    }
}

// Print Array
void printFunc(vector<int>& arr) {

    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
}

int main() {

    int n;
    cin >> n;

    vector<int> arr(n);

    // Input elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Build Heap
    BuildMaxHeap(arr, n);

    // Perform Heap Sort
    HeapSort(arr, n);

    // Print Sorted Array
    printFunc(arr);

    return 0;
}

/*

PSEUDOCODE ALGORITHM

Algorithm Heapify(arr, i, n)

1. largest = i
2. left = 2*i + 1
3. right = 2*i + 2

4. If left < n AND arr[left] > arr[largest]
       largest = left

5. If right < n AND arr[right] > arr[largest]
       largest = right

6. If largest != i
       Swap arr[i] and arr[largest]
       Heapify(arr, largest, n)

------------------------------------------------

Algorithm BuildMaxHeap(arr, n)

1. For i = n/2 - 1 down to 0
       Heapify(arr, i, n)

------------------------------------------------

Algorithm HeapSort(arr, n)

1. BuildMaxHeap(arr, n)

2. For i = n-1 down to 1

       Swap arr[0] and arr[i]

       Heapify(arr, 0, i)

3. End

*/