#include<iostream>
#include<stack>
using namespace std;

class Node{
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

    if(val > root -> data) {
        root -> right = insert(root -> right, val);
    }
    else if(val < root -> data) {
        root -> left = insert(root -> left, val);
    }

    return root;
}

Node* ArrayToTree(vector<int> arr) {
    int n = arr.size();
    Node* root = new Node(arr[0]);
    for(int i = 1; i<n; i++) {
        root = insert(root, arr[i]);
    }
    return root;
}
void preorder(Node* root) {

    if(root == nullptr)
        return;
    stack<Node*> st;
    Node* temp = root;
    st.push(temp);
    while(!st.empty()){
        temp = st.top();
        st.pop();
        cout << temp -> data << " ";

        if(temp -> right) {
            st.push(temp->right);
        }
        if(temp -> left) {
            st.push(temp->left);
        }
    }
    

}
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i<n; i++) {
        cin >> arr[i];
    }
    Node* root = ArrayToTree(arr);
    preorder(root);
    
}