#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class Node{
    public: 
    int data;
    Node* left;
    Node* right;

    Node(int data1){
        data = data1;
        left = nullptr;
        right = nullptr;
    }
};
Node* insert(Node* root, int val) {
    if(root == nullptr) {
        return new Node(val);
    }
    
    if(val > root -> data) {
        root->right = insert(root->right, val);
    }
    else if(val < root -> data) {
        root ->left = insert(root->left, val);
    }
    return root;
}
Node* ArrayToTree(vector<int> arr) {
    Node* root = new Node(arr[0]);
    for(int i = 1; i<arr.size(); i++) {
        root = insert(root, arr[i]);
    }
    return root;
}

void inorder(Node* root) {
   if(root == nullptr) {
    return;
   }
   stack<Node*> st;
   Node* temp = root;

   while(temp != nullptr || !st.empty()) {
    while(temp!= nullptr) {
        st.push(temp);
        temp = temp -> left;
    }
        temp = st.top();
        st.pop();
        cout << temp -> data << " ";
        temp = temp -> right;
   }
}
void preorder(Node* root) {
    if(root == nullptr) {
        return;
    }
    Node* temp = root;
    stack<Node*> st1;
    st1.push(temp);
    while(!st1.empty()){
        temp = st1.top();
        st1.pop();
        cout << temp -> data << " ";

        if(temp->right) {
            st1.push(temp->right);
        }
        if(temp->left) {
            st1.push(temp->left);
        }

    }
}
void postorder(Node* root) {
    if(root == nullptr) {
        return;
    }
    stack<Node*> st1, st2;
    Node* temp = root;
    st1.push(temp);
    while(!st1.empty()) {
        temp = st1.top();
        st1.pop();
        st2.push(temp);
        if(temp->left) {
            st1.push(temp->left);
        }
        if(temp->right)
        {
            st1.push(temp->right);
        }
    }
    while(!st2.empty()) {
        cout << st2.top()->data << " ";
        st2.pop();
    }
}
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i<n; i++) {
        cin >> arr[i];
    }
    Node* root = nullptr;
    root = ArrayToTree(arr);
    inorder(root); cout << endl;
    preorder(root); cout << endl;
    postorder(root); cout << endl;

}