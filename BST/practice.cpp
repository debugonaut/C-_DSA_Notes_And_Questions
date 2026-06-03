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

Node* insert(Node* head, int val) {
    Node* newNode = new Node(val);

    if(head == nullptr) {
        head = newNode;
        head -> next = nullptr;
        return head;
    }
    Node* temp = head;
    while(temp -> next != nullptr) {
        temp = temp -> next;
    }
    temp -> next = newNode;
    newNode -> next = nullptr;
    return head;

}
int main()
{
    Node* head = new Node(2);
    head = insert(head, 2);
    head = insert(head, 3);
    head = insert(head, 4);


    Node* temp = head;
    while(temp != nullptr) {
        cout << temp-> data << " ";
        temp = temp -> next;
    }
   

    return 0;
}