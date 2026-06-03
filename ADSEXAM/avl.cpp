#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    int height;

    Node(int data1) {
        data = data1;
        left = nullptr;
        right = nullptr;
        height = 1;
    }
};
int getHeight(Node* root) {
    if(root == nullptr) {
        return 0;
    }
    else return root->height;
}
int getBalance(Node* root) {
    return getHeight(root->left) - getHeight(root->right);
}
Node* RightRotation(Node* root) {
    Node* child = root->left;
    Node* ChildRight = child->right;

    child ->right = root;
    root->left = ChildRight;

    // Update Height
    root->height = 1 + max(getHeight(root->left), getHeight(root->right));
    child->height = 1 + max(getHeight(child->left), getHeight(child->right));
    return child;
}
Node* LeftRotation(Node* root) {
    Node* child = root->right;
    Node* ChildLeft = child->left;

    child ->left = root;
    root->right = ChildLeft;

    // Update Height
    root->height = 1 + max(getHeight(root->left), getHeight(root->right));
    child->height = 1 + max(getHeight(child->left), getHeight(child->right));
    return child;
}

Node* insert(Node* root, int val) {
    if(root == nullptr) {
        return new Node(val);
    }
    
    // BST Formation
    // Left Subtree Condition
    if(val < root->data) {
        root->left = insert(root->left,val);
    }
    // Right Subtree Condition
    if(val > root->data) {
        root->right = insert(root->right,val);
    }
    
    // Get height of root
    root->height = 1 + max(getHeight(root->left), getHeight(root->right));
    
    // Balance Condition
    int balance = getBalance(root);
    
    //Rotation Conditions
    
    // LL
    if(balance > 1 && val < root-> left -> data) {
        return RightRotation(root);
    }
    // LR
    else if(balance > 1 && val > root-> left -> data){
        root->left = LeftRotation(root->left);
        return RightRotation(root);
    }
    // RL
    else if(balance < -1 && val < root->right -> data) {
        root->right = RightRotation(root->right);
        return LeftRotation(root);
    }
    // RR
    else if(balance < -1 && val > root->right -> data) {
        return LeftRotation(root);
    }
    else return root;
}
Node* ArrayToTree(vector<int> arr, Node* root) {
    
    for(int i = 0; i<arr.size(); i++) {
        root = insert(root, arr[i]);
    }
    return root;
}
void inorder(Node* root) {
    if(root == nullptr) {
        return;
    } // base condition
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i<n; i++) {
        cin >> arr[i];
    }

    Node* root = nullptr;
    root = ArrayToTree(arr, root);
    inorder(root);
}