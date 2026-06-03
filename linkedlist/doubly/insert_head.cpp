#include <iostream>
#include <vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    public:
    Node(int data1) {
        data = data1;
        next = nullptr;
        prev = nullptr;
    }
    public:
    Node(int data1, Node* next1, Node* prev1) {
        data = data1;
        next = next1;
        prev = prev1;
    }
};

Node* ConvertArrTo2DLL(vector<int> arr) {
    if(arr.size() == 0) {
        return nullptr;
    }
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i = 1; i<arr.size(); i++ ){
        Node* temp = new Node(arr[i], nullptr, prev);
        prev -> next = temp;
        prev = temp;
    }
    return head;


}
Node* insert_head(Node* head, int value) {
    
    // If the list is non-empty
    Node* newNode = new Node(value);
    if(head == nullptr) {
        return newNode;
    }
    newNode -> next = head;
    head -> prev = newNode;
    head = newNode;
    return head;
}
void print(Node* head) {
    Node* temp = head;
    while(temp != nullptr) {
        cout << temp->data << " ";
        temp = temp -> next;
    }
}
int main() {
    vector<int> arr = {1};
    Node* head = ConvertArrTo2DLL(arr);
    int value;
    cin >> value;
    head = insert_head(head, value);
    print(head);
}
