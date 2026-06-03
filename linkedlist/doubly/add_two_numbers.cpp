#include <iostream>
#include<stack>
#include <vector>
using namespace std;

class Node {
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

    Node(int data1, Node* next1, Node* prev1) {
        data = data1;
        next = next1;
        prev = prev1;
    }
};

Node* ConvertArrTo2DLL(vector<int> arr) {
    if (arr.size() == 0) {
        return nullptr;
    }
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

Node* ConvertArrTo2DLL2(vector<int> arr2) {
    if (arr2.size() == 0) {
        return nullptr;
    }
    Node* head = new Node(arr2[0]);
    Node* prev = head;
    for (int i = 1; i < arr2.size(); i++) {
        Node* temp = new Node(arr2[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

Node* Add(Node* head1, Node* head2) {
    Node* temp1 = head1;
    Node* temp2 = head2;
    int val1 = 0;
    int val2 = 0;

    while (temp1 != nullptr) {
        val1 = (val1 * 10) + temp1->data;
        temp1 = temp1->next;   // syntax fix
    }

    while (temp2 != nullptr) {
        val2 = (val2 * 10) + temp2->data;
        temp2 = temp2->next;   // syntax fix
    }

    val1 = val1 + val2;
    stack<int> st;
    int remainder;
    while(val1 > 0) {
        remainder = val1 % 10;
        st.push(remainder);
        val1 /= 10;
    }
    Node* Final_Head = nullptr;
    Node* prev = nullptr;

    while (!st.empty()) {
        Node* node = new Node(st.top());
        st.pop();

        if (Final_Head == nullptr) {
            Final_Head = node;
        } else {
            prev->next = node;
            node->prev = prev;
        }
        prev = node;
    }

    return Final_Head;
}

void print(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main() {
    vector<int> arr = {1, 6, 7, 8}, arr2 = {1, 2, 3};
    Node* head1 = ConvertArrTo2DLL(arr);
    Node* head2 = ConvertArrTo2DLL2(arr2);
    Node* final = Add(head1, head2);
    print(final);

}