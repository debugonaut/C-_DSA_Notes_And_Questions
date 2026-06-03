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
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i = 1; i<arr.size(); i++ ){
        Node* temp = new Node(arr[i], nullptr, prev);
        prev -> next = temp;
        prev = temp;
    }
    return head;


}

    Node* Delete_anywhere(Node* head, int position) {
    int count = 1;
    // To check whether the list is empty
    if(head == nullptr) {
        return head;
    }
    // To traverse till position
    Node* temp = head;
    while(temp != nullptr && count < position) {
        temp = temp->next;
        count++;
    }
    // Out of bounds position
    if(temp == nullptr) {
        cout << "Index out of bounds \n";
        return head;
    }
    Node* left = temp -> prev;
    Node* right = temp -> next ;

    // If position is head
    if(left == nullptr) {
        head = right;
        if(right != nullptr) {
            right -> prev = nullptr;
        }
    }

    // If position is tail
    else if(right == nullptr) {
        left -> next = nullptr;
    }

    else {
        left -> next = right;
        right -> prev = left;
    }
    delete temp;
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
    vector<int> arr = {1,2,3,4,5,6,7};
    Node* head = ConvertArrTo2DLL(arr);
    int position;
    cin >> position;
    head = Delete_anywhere(head, position);
    print(head);
}
