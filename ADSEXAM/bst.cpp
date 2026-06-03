#include <iostream>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

// Node Class
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

// INSERTION FUNCTION
Node* insert(Node* root, int val) {
    if (root == nullptr) {
        return new Node(val);
    }

    if (val > root->data) {
        root->right = insert(root->right, val);
    } else if (val < root->data) {
        root->left = insert(root->left, val);
    }

    return root;
}

// CREATE BST FROM ARRAY
Node* ArrayToTree(vector<int> arr) {
    Node* root = new Node(arr[0]);
    for (int i = 1; i < arr.size(); i++) {
        root = insert(root, arr[i]);
    }
    return root;
}

// NON-RECURSIVE INORDER
void inorder(Node* root) {
    if (root == nullptr) return;

    stack<Node*> st;
    Node* temp = root;

    while (temp != nullptr || !st.empty()) {
        while (temp != nullptr) {
            st.push(temp);
            temp = temp->left;
        }

        temp = st.top();
        st.pop();

        cout << temp->data << " ";
        temp = temp->right;
    }
}

// NON-RECURSIVE PREORDER
void preorder(Node* root) {
    if (root == nullptr) return;

    stack<Node*> st;
    st.push(root);

    while (!st.empty()) {
        Node* temp = st.top();
        st.pop();
        cout << temp->data << " ";

        if (temp->right) st.push(temp->right);
        if (temp->left) st.push(temp->left);
    }
}

// NON-RECURSIVE POSTORDER
void postorder(Node* root) {
    if (root == nullptr) return;

    stack<Node*> st1, st2;
    st1.push(root);

    while (!st1.empty()) {
        Node* temp = st1.top();
        st1.pop();
        st2.push(temp);

        if (temp->left) st1.push(temp->left);
        if (temp->right) st1.push(temp->right);
    }

    while (!st2.empty()) {
        cout << st2.top()->data << " ";
        st2.pop();
    }
}

// RECURSIVE TRAVERSALS
void Rpreorder(Node* root) {
    if (root == nullptr) return;
    cout << root->data << " ";
    Rpreorder(root->left);
    Rpreorder(root->right);
}

void Rpostorder(Node* root) {
    if (root == nullptr) return;
    Rpostorder(root->left);
    Rpostorder(root->right);
    cout << root->data << " ";
}

void Rinorder(Node* root) {
    if (root == nullptr) return;
    Rinorder(root->left);
    cout << root->data << " ";
    Rinorder(root->right);
}

// LEVEL-ORDER TRAVERSAL
void levelOrder(Node* root) {
    if (root == nullptr) return;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();

        cout << temp->data << " ";

        if (temp->left != nullptr) q.push(temp->left);
        if (temp->right != nullptr) q.push(temp->right);
    }
}

// FIND MINIMUM NODE
Node* findMin(Node* root) {
    while (root->left != nullptr) {
        root = root->left;
    }
    return root;
}

// DELETE NODE FUNCTION
Node* deleteNode(Node* root, int key) {
    if (root == nullptr) return nullptr;

    if (key < root->data) {
        root->left = deleteNode(root->left, key);
    } else if (key > root->data) {
        root->right = deleteNode(root->right, key);
    } else {
        // Node found
        if (root->left == nullptr && root->right == nullptr) {
            delete root;
            return nullptr;
        } else if (root->left == nullptr) {
            Node* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == nullptr) {
            Node* temp = root->left;
            delete root;
            return temp;
        } else {
            Node* temp = findMin(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
        }
    }
    return root;
}

// MENU-DRIVEN MAIN FUNCTION
int main() {
    Node* root = nullptr;
    int choice;

    do {
        cout << "\n--- Binary Search Tree Menu ---\n";
        cout << "1. Create BST from array\n";
        cout << "2. Insert a node\n";
        cout << "3. Delete a node\n";
        cout << "4. Recursive Inorder traversal\n";
        cout << "5. Recursive Preorder traversal\n";
        cout << "6. Recursive Postorder traversal\n";
        cout << "7. Non-Recursive Inorder traversal\n";
        cout << "8. Non-Recursive Preorder traversal\n";
        cout << "9. Non-Recursive Postorder traversal\n";
        cout << "10. Level-Order traversal\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int n;
                cout << "Enter number of nodes: ";
                cin >> n;
                vector<int> arr(n);
                cout << "Enter node values:\n";
                for (int i = 0; i < n; i++) cin >> arr[i];
                root = ArrayToTree(arr);
                cout << "BST created successfully.\n";
                break;
            }
            case 2: {
                int val;
                cout << "Enter value to insert: ";
                cin >> val;
                root = insert(root, val);
                cout << "Value inserted.\n";
                break;
            }
            case 3: {
                int key;
                cout << "Enter value to delete: ";
                cin >> key;
                root = deleteNode(root, key);
                cout << "Value deleted if present.\n";
                break;
            }
            case 4:
                cout << "Recursive Inorder: ";
                Rinorder(root);
                cout << endl;
                break;
            case 5:
                cout << "Recursive Preorder: ";
                Rpreorder(root);
                cout << endl;
                break;
            case 6:
                cout << "Recursive Postorder: ";
                Rpostorder(root);
                cout << endl;
                break;
            case 7:
                cout << "Non-Recursive Inorder: ";
                inorder(root);
                cout << endl;
                break;
            case 8:
                cout << "Non-Recursive Preorder: ";
                preorder(root);
                cout << endl;
                break;
            case 9:
                cout << "Non-Recursive Postorder: ";
                postorder(root);
                cout << endl;
                break;
            case 10:
                cout << "Level-Order traversal: ";
                levelOrder(root);
                cout << endl;
                break;
            case 0:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 0);

    return 0;
}