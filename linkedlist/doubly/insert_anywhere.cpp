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
Node* anywhere(Node* head, int position, int value) {
    Node* newNode = new Node(value);
    // If linkedlist is empty;
    if(head == nullptr) {
        return newNode;
    }
    // Traverse till the position
    int count = 1;
    Node* temp = head;
    while(temp != nullptr && count  < position) {
        temp = temp->next;
        count++;
    }
    // Position is out of bounds
    if(temp == nullptr){
        cout << "Out of Bounds \n";
        return head;
    }
    
    // If the position is at head
    if(temp -> prev == nullptr) {
    newNode -> next = head;
    head -> prev = newNode;
    head = newNode;
    return head;
    }

    // If the position is at tail
    else if(temp -> next == nullptr) {
        temp -> next = newNode;
        newNode -> prev = temp;
        return head;
    }

    // If the position is in middle 
    else {
        newNode -> next = temp -> next;
        temp -> next -> prev = newNode;
        temp -> next = newNode;
        newNode -> prev = temp;
    }
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
    vector<int> arr = {1,6,7,8};
    Node* head = ConvertArrTo2DLL(arr);
    int position;
    cin >> position;
    int value;
    cin >> value;
    head = anywhere(head, position, value);
    print(head);
}
