#include<iostream>
#include<stack>
#include<queue>

using namespace std;

class Node {

public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

class BST {

    Node* root;

public:

    BST() {
        root = NULL;
    }

    // Insert Node
    Node* insert(Node* root, int val) {

        if(root == NULL)
            return new Node(val);

        if(val < root->data)
            root->left = insert(root->left, val);

        else if(val > root->data)
            root->right = insert(root->right, val);

        return root;
    }

    void insertNode(int val) {
        root = insert(root, val);
    }

    // Inorder Recursive
    void inorder(Node* root) {

        if(root == NULL)
            return;

        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }

    void displayInorder() {
        inorder(root);
    }

    // Preorder Recursive
    void preorder(Node* root) {

        if(root == NULL)
            return;

        cout << root->data << " ";

        preorder(root->left);
        preorder(root->right);
    }

    void displayPreorder() {
        preorder(root);
    }

    // Postorder Recursive
    void postorder(Node* root) {

        if(root == NULL)
            return;

        postorder(root->left);
        postorder(root->right);

        cout << root->data << " ";
    }

    void displayPostorder() {
        postorder(root);
    }

    // Inorder Non-Recursive
    void inorderNonRecursive() {

        stack<Node*> st;
        Node* temp = root;

        while(temp != NULL || !st.empty()) {

            while(temp != NULL) {
                st.push(temp);
                temp = temp->left;
            }

            temp = st.top();
            st.pop();

            cout << temp->data << " ";

            temp = temp->right;
        }
    }

    // Preorder Non-Recursive
    void preorderNonRecursive() {

        if(root == NULL)
            return;

        stack<Node*> st;
        st.push(root);

        while(!st.empty()) {

            Node* temp = st.top();
            st.pop();

            cout << temp->data << " ";

            if(temp->right)
                st.push(temp->right);

            if(temp->left)
                st.push(temp->left);
        }
    }

    // Postorder Non-Recursive
    void postorderNonRecursive() {

        if(root == NULL)
            return;

        stack<Node*> st1, st2;

        st1.push(root);

        while(!st1.empty()) {

            Node* temp = st1.top();
            st1.pop();

            st2.push(temp);

            if(temp->left)
                st1.push(temp->left);

            if(temp->right)
                st1.push(temp->right);
        }

        while(!st2.empty()) {

            cout << st2.top()->data << " ";
            st2.pop();
        }
    }

    // Find Minimum
    Node* findMin(Node* root) {

        while(root->left != NULL)
            root = root->left;

        return root;
    }

    // Delete Node
    Node* deleteNode(Node* root, int key) {

        if(root == NULL)
            return NULL;

        if(key < root->data)
            root->left = deleteNode(root->left, key);

        else if(key > root->data)
            root->right = deleteNode(root->right, key);

        else {

            // No child
            if(root->left == NULL && root->right == NULL) {

                delete root;
                return NULL;
            }

            // One child
            else if(root->left == NULL) {

                Node* temp = root->right;
                delete root;
                return temp;
            }

            else if(root->right == NULL) {

                Node* temp = root->left;
                delete root;
                return temp;
            }

            // Two children
            else {

                Node* temp = findMin(root->right);

                root->data = temp->data;

                root->right = deleteNode(root->right, temp->data);
            }
        }

        return root;
    }

    void deleteValue(int key) {
        root = deleteNode(root, key);
    }

    // Level Order Traversal
    void levelOrder() {

        if(root == NULL)
            return;

        queue<Node*> q;
        q.push(root);

        while(!q.empty()) {

            Node* temp = q.front();
            q.pop();

            cout << temp->data << " ";

            if(temp->left)
                q.push(temp->left);

            if(temp->right)
                q.push(temp->right);
        }
    }
};

int main() {

    BST tree;

    int n, val;

    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter node values:\n";

    for(int i = 0; i < n; i++) {

        cin >> val;
        tree.insertNode(val);
    }

    cout << "\nInorder Traversal: ";
    tree.displayInorder();

    cout << "\nPreorder Traversal: ";
    tree.displayPreorder();

    cout << "\nPostorder Traversal: ";
    tree.displayPostorder();

    cout << "\n\nInorder Non-Recursive: ";
    tree.inorderNonRecursive();

    cout << "\nPreorder Non-Recursive: ";
    tree.preorderNonRecursive();

    cout << "\nPostorder Non-Recursive: ";
    tree.postorderNonRecursive();

    cout << "\n\nLevel Order Traversal: ";
    tree.levelOrder();

    cout << "\n\nEnter value to insert: ";
    cin >> val;

    tree.insertNode(val);

    cout << "Inorder after insertion: ";
    tree.displayInorder();

    int key;

    cout << "\n\nEnter value to delete: ";
    cin >> key;

    tree.deleteValue(key);

    cout << "Inorder after deletion: ";
    tree.displayInorder();

    return 0;
}