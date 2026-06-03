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
    Node* head = new Node(15);
    head -> next = new Node(21);
    head -> next -> next = new Node(22);
    head -> next -> next-> next= new Node(23);
    head -> next -> next-> next-> next= new Node(24);
    head -> next-> next-> next-> next-> next = new Node(25);


    int count = 0;
    Node* temp = head;
    while(temp != nullptr) {
        count++;
        temp = temp -> next;
    }
    cout << count;
    return 0;
}