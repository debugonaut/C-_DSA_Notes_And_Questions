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
Node* convertArrtoLL(vector<int> arr) {
    Node* head = nullptr;
    Node* tail = nullptr;
    for(int i = 0; i<arr.size(); i++ ){
        Node* newNode = new Node(arr[i]);
        if(head == nullptr) {
            head = newNode;
            tail = newNode;
        }
        else {
            tail -> next = newNode;
            tail = tail -> next;
        }
    }
    return head;
}
Node* InsertAtEnd(Node* head, int val) {
    if(head == nullptr) {
        Node* newNode = new Node(val);
        head = newNode;
        head->next = nullptr;
        return head;
    }
    Node* temp = head;
    Node* newNode = new Node(val);
    while(temp -> next != nullptr) {
        temp = temp -> next;
    }
    temp -> next = newNode;
    return head;
}
void print(Node* head) {
    Node* temp = head;
    while(temp != nullptr) {
        cout << temp->data << " ";
        temp = temp-> next;
    }
}
int main() {
Node* tail = nullptr;
    vector<int> arr = {1,2,3,4,5,6,7};
    Node* head = convertArrtoLL(arr);
    int val;
    cin >> val;
    head = InsertAtEnd(head, val);
    print(head);
}