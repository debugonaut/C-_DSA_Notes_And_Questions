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
    for(int i = 0; i<n; i++) {
        root = insert(root, arr[i]);
    }
    return root;
}
void inorder(Node* root) {
    stack<Node*> st;
    Node* temp = root;

    while(temp != nullptr || !st.empty()) {
        while(temp != nullptr) {
            st.push(temp);
            temp = temp -> left;
        }
        temp = st.top();
        st.pop();

        cout << temp -> data << " ";
        temp = temp->right;
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
    inorder(root);
    
}