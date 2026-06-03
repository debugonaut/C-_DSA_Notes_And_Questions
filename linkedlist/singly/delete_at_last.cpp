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

int main() {
    vector<int> arr = {1,2,3,4,5,6};
    Node* head = nullptr;
    Node* tail = nullptr;


    for (int i = 0; i < arr.size(); i++) {
        Node* newNode = new Node(arr[i]);
        if (head == nullptr) {
            head = newNode;
            tail = head;
        } else {
            tail->next = newNode;
            tail = tail->next;
        }
    }


    Node* temp = head;
    while (temp->next->next != nullptr) {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;

    Node* temp2 = head;
    while (temp2 != nullptr) {
        cout << temp2->data << " ";
        temp2 = temp2->next;
    }

    return 0;
}
