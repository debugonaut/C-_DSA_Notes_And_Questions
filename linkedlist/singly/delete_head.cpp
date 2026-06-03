#include<iostream>
#include<vector>
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

Node* convertarrToLL(vector<int> arr) {
    Node* head = new Node(arr[0]);
    Node* tail = head;
    for(int i = 1; i<arr.size(); i++ ){
        tail -> next = new Node(arr[i]);
        tail = tail ->next;
    }
    return head;
}
Node* Delete_head(Node* head) {
    if(head == nullptr) return nullptr;
    else {
        Node* temp = head;
        head = head -> next;
        delete temp;
    }
    return head;
}
void print(Node* head){
    Node* temp = head;
    while(temp != nullptr) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
}

int main() {
vector<int> arr = {1,2};
Node* head = convertarrToLL(arr);
head = Delete_head(head);
print(head);
}