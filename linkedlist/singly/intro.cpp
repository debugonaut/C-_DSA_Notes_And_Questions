#include <iostream>
#include <vector>
using namespace std;

class Node {
    public:
    int data; 
    Node* next;

    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }
};

int main()
{

    Node z(2, nullptr);     // stack allocation method of defining a linked list
    cout << z.data << endl; 


    Node* y = new Node(3, nullptr); // heap allocation method of defining a linked list
    cout << y->data; // This is better as it does not gets deleted and it requires manual deletion 
    return 0;
}