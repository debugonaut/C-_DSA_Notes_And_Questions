#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Node {
    public:
    string name;
    Node* next;

    Node(string name1) {
        name = name1;
        next = nullptr;
    }
};
int main()
{
    int num;
    cin >> num;
    vector<string> name(num);
    for(int i = 0; i<num; i++)
    {
        cin >> name[i];
    }
    Node* head = nullptr;
    Node* tail = nullptr;
    for(int i = 0; i<num; i++)
    {
        Node* newNode = new Node(name[i]);
        if(head == nullptr) {
            head = newNode;
            tail = newNode;
        }
        else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    Node* temp = head;
    while(temp != nullptr) {
        cout << temp -> name << endl;
        temp = temp -> next;
    }
    return 0;
}