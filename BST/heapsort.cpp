#include <iostream>
#include <vector>
using namespace std;

void Heapify(vector<int>& arr, int i, int n){
    int largest = i;
    int left = 2*i+1;
    int right = 2*i+2;
    if(left<n && arr[left] > arr[largest]){
        largest = left;
    }
    if(right<n && arr[right] > arr[largest]){
        largest = right;
    }
    if(largest!=i) {
        swap(arr[largest], arr[i]);
        Heapify(arr,largest,n);
    }
}
void BuildMaxHeap(vector<int>& arr, int n)
{
    for(int i = n/2-1; i>=0; i--){
        Heapify(arr, i, n);
    }
}
void HeapSort(vector<int>& arr, int n) {
    for(int i = n - 1; i>0; i--) {
        swap(arr[i], arr[0]);
        Heapify(arr,0,i);
    }
}
void printFunc(vector<int>& arr) {
    for(int i = 0 ;i<arr.size(); i++) {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0 ; i<n; i++) {
        cin >> arr[i];
    }
    BuildMaxHeap(arr, n);
    HeapSort(arr, n);
    printFunc(arr);

    return 0;
}