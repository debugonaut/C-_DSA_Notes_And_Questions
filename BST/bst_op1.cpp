#include <iostream>
#include <vector>
using namespace std;

class Node {
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data1) {
        data = data1;
        left = nullptr;
        right = nullptr;
    }
};
Node* insert(Node* root, int val) {
    if(root == nullptr) {
        return new Node(val);
    }

    if(val < root -> data) {
        root -> left = insert(root->left, val);
    }
    else if(val > root -> data) {
        root -> right = insert(root->right, val);
    }
    return root;
}
void preorder(Node* root) {
    if(root == nullptr) {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);

}
void postorder(Node* root) {
    if(root == nullptr) {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";

}
void inorder(Node* root) {
    if(root == nullptr) {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);

}
int main()
{
    Node* root = new Node(50);
    root = insert(root, 30);
    root = insert(root, 69);
    root = insert(root, 66);
    root = insert(root, 9);
    root = insert(root, 20);

    int choice;
    cin >> choice;
    switch(choice){
        case 1: postorder(root); break;
        case 2: preorder(root); break;
        case 3: inorder(root); break;
        default: "Invalid Option";
    }
    return 0;
}