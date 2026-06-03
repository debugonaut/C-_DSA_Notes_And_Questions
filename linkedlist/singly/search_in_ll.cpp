#include <iostream>
#include <vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};
int main()
{
    Node* head = nullptr;
    Node* tail = nullptr;
    int num;
    cin >> num;
    vector<int> arr(num);
    for(int i = 0; i<num; i++){
        cin >> arr[i];
    }
    int key;
    cin >> key;
    for(int i = 0; i<num; i++) {
        Node* newNode = new Node(arr[i]);
        if(head == nullptr) {
            head = newNode;
            tail = newNode;
        }
        else {
            tail -> next = newNode;
            tail = newNode;
        }
    }

    Node* temp = head;
    int count = 1;
    while(temp != nullptr) {
        if (temp -> data == key) {
            cout << "Element found at " << count;
        }
        count++;
        temp = temp -> next;
    }
    return 0;
}