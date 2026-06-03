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
 
Node* Reverse(Node* head) {
    if(head == nullptr || head -> next == nullptr) {
        return head;
    }
    Node* left = head;
    Node* right = head;
    // Initializing left at start and right and end of LL
    while(right -> next != nullptr) {
        right = right -> next;
    }
    // At this point the right is at last index and left is at first
    while(left != right && left -> prev != right) {
        int value;
        value = right -> data;
        right -> data = left -> data;
        left -> data = value;
        left = left -> next;
        right = right -> prev;
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
    head = Reverse(head);
    print(head);
}
