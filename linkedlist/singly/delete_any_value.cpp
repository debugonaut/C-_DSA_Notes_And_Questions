#include<iostream>
#include<vector>
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
Node* DeleteAnyIndex(Node* head, int val) {
    if(head == nullptr) return nullptr;
    if(head->data == val) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    Node* temp = head;
    Node* prev = nullptr;
    while(temp != nullptr) {
        if(temp -> data == val) {
            prev->next = prev -> next -> next;
            delete temp;
            break;
        }

        prev = temp;
        temp = temp -> next;
    }
    return head;
}
void print(Node* head) {
    Node* temp = head;
    while(temp != nullptr) {
        cout << temp->data << " ";
        temp = temp-> next;
    }
}
int main(){
    Node* tail = nullptr;
    vector<int> arr = {1,2,3,4,5,6,7};
    Node* head = convertArrtoLL(arr);
    int val;
    cin >> val;
    head = DeleteAnyIndex(head, val);
    print(head);

}