#include <iostream>
#include <vector>
using namespace std;

class Node{
    
    int data;
    Node* next;

    Node(int data1) {
        data = data1;
        next = nullptr;
    }
    void printLL() {
        Node* temp = head;
        while(temp != nullptr) {
            cout << temp << " ";
            temp = temp->next;
        }
    }
}

int main()
{
    Node newNode = new Node(5);
    
}