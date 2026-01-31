#include <iostream>
#include <vector>
using namespace std;

class Node {
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
    vector<int> arr = {1,2,3,4,5};
    Node* head = nullptr;
    Node* tail = nullptr;
    for(int i = 0; i<arr.size(); i++) {
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
    while(temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;
}