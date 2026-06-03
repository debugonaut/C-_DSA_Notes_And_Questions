#include <iostream>

using namespace std;

// Function to heapify a subtree rooted at index i
void heapify(int arr[], int n, int i) {

    // Assume current node is largest
    int largest = i;

    // Left child index
    int left = 2 * i + 1;

    // Right child index
    int right = 2 * i + 2;

    // If left child exists
    // and is greater than largest
    if(left < n && arr[left] > arr[largest]) {

        largest = left;
    }

    // If right child exists
    // and is greater than largest
    if(right < n && arr[right] > arr[largest]) {

        largest = right;
    }

    // If largest is not root
    if(largest != i) {

        // Swap root with largest child
        swap(arr[i], arr[largest]);

        // Heapify affected subtree again
        heapify(arr, n, largest);
    }
}

// Heap Sort Function
void heapSort(int arr[], int n) {

    // Build Max Heap
    // Start from last non-leaf node
    for(int i = n / 2 - 1; i >= 0; i--) {

        heapify(arr, n, i);
    }

    // One by one extract elements
    for(int i = n - 1; i > 0; i--) {

        // Move current root (largest)
        // to end
        swap(arr[0], arr[i]);

        // Heapify reduced heap
        heapify(arr, i, 0);
    }
}

// Function to print array
void printArray(int arr[], int n) {

    for(int i = 0; i < n; i++) {

        cout << arr[i] << " ";
    }

    cout << endl;
}

int main() {

    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements:\n";

    for(int i = 0; i < n; i++) {

        cin >> arr[i];
    }

    cout << "\nOriginal Array:\n";
    printArray(arr, n);

    // Perform Heap Sort
    heapSort(arr, n);

    cout << "\nSorted Array:\n";
    printArray(arr, n);

    return 0;
}