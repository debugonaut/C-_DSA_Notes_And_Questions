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
int Getheight(Node* root) {
    if(root == nullptr) {
        return 0;
    }
    else return root->height;
}
int getBalance(Node* root) {
    return Getheight(root->left) - Getheight(root->right);
}

Node* RightRotate(Node* root) {
Node* Child = root -> left;
Node* ChildRight = Child -> right;

Child -> right = root;
root -> left = ChildRight;

// Update the height
root -> height = 1 + max(Getheight(root->left) , Getheight(root->right));
Child -> height = 1 + max(Getheight(Child->left) , Getheight(Child->right));
return Child;
}

Node* LeftRotate(Node* root) {
Node* Child = root -> right;
Node* ChildRight = Child -> left;

Child -> left = root;
root -> right = ChildRight;

// Update the height
root -> height = 1 + max(Getheight(root->left) , Getheight(root->right));
Child -> height = 1 + max(Getheight(Child->left) , Getheight(Child->right));
return Child;
}
Node* insert(Node* root, int val){
    // insertion of bst
    if(root == nullptr) {
        return new Node(val);
    }
    if(val < root->data) {
        root->left = insert(root->left, val);
    }
    else if (val > root->data) {
        root->right = insert(root->right, val);
    }
    // Update Height 
    root -> height = 1 + max(Getheight(root->left), Getheight(root->right));
    // Balancing condition
    int balance = getBalance(root);
    // Rotation
    //LL
    if(balance > 1 && val < root -> left -> data) 
    {
        return RightRotate(root);
    }
    //RR
    else if(balance < -1 && val >root -> right -> data) {
        return LeftRotate(root);
    }
    //LR
    else if(balance > 1 && val > root -> left -> data)
    {
        root -> left = LeftRotate(root->left);
        return RightRotate(root);
    }
    //RL
    else if(balance < -1 && val < root -> right -> data)
    {
        root -> right = RightRotate(root->right);
        return LeftRotate(root);
    }
    return root;
}
Node* ArrayToTree(vector<int> arr, Node* root){
    for(int i = 0; i<arr.size(); i++) {
        root = insert(root, arr[i]);
    }
    return root;
}

void inorder(Node* root) {
    if(root == nullptr) {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
int main() {

    Node* root = nullptr;
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i<n; i++) {
        cin >> arr[i];
    }
    root = ArrayToTree(arr,root);
    inorder(root);

}