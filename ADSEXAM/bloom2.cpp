#include <iostream>
using namespace std;

class BloomFilter {

    int arr[10];

public:

    // Constructor
    BloomFilter() {

        for(int i = 0; i < 10; i++) {
            arr[i] = 0;
        }
    }

    // Hash Function 1
    int hash1(int key) {
        return key % 10;
    }

    // Hash Function 2
    int hash2(int key) {
        return (key / 10) % 10;
    }

    // Insert Function
    void insert(int key) {

        int index1 = hash1(key);
        int index2 = hash2(key);

        arr[index1] = 1;
        arr[index2] = 1;
    }

    // Search Function
    void search(int key) {

        int index1 = hash1(key);
        int index2 = hash2(key);

        if(arr[index1] == 1 && arr[index2] == 1) {
            cout << key << " Possibly Present" << endl;
        }
        else {
            cout << key << " Not Present" << endl;
        }
    }

    // Display Function
    void display() {

        cout << "Bloom Filter Array: ";

        for(int i = 0; i < 10; i++) {
            cout << arr[i] << " ";
        }

        cout << endl;
    }
};

int main() {

    BloomFilter bf;

    // User Defined Array
    int data[] = {15, 25, 35, 45};

    int n = 4;

    // Insert all elements
    for(int i = 0; i < n; i++) {
        bf.insert(data[i]);
    }

    bf.display();

    // Search elements
    bf.search(25);
    bf.search(50);

    return 0;
}