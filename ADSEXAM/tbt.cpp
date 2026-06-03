#include<iostream>
#include<stack>

using namespace std;

// TBT Node
struct Node {

    int data;

    Node* left;
    Node* right;

    // true means thread exists
    bool lthread;
    bool rthread;
};

// Create new node
Node* createNode(int val) {

    Node* temp = new Node;

    temp->data = val;

    temp->left = nullptr;
    temp->right = nullptr;

    temp->lthread = true;
    temp->rthread = true;

    return temp;
}

// INSERT FUNCTION
Node* insert(Node* root, int val) {

    Node* ptr = root;
    Node* parent = nullptr;

    // Find insertion position
    while(ptr != nullptr) {

        // Duplicate value
        if(val == ptr->data) {

            cout << "Duplicate Value\n";
            return root;
        }

        parent = ptr;

        // Move left
        if(val < ptr->data) {

            if(ptr->lthread == false)
                ptr = ptr->left;

            else
                break;
        }

        // Move right
        else {

            if(ptr->rthread == false)
                ptr = ptr->right;

            else
                break;
        }
    }

    // Create new node
    Node* temp = createNode(val);

    // First node
    if(parent == nullptr) {

        root = temp;
    }

    // Insert on left side
    else if(val < parent->data) {

        temp->left = parent->left;
        temp->right = parent;

        parent->lthread = false;
        parent->left = temp;
    }

    // Insert on right side
    else {

        temp->left = parent;
        temp->right = parent->right;

        parent->rthread = false;
        parent->right = temp;
    }

    return root;
}

// RECURSIVE INORDER
void Rinorder(Node* root) {

    if(root == nullptr)
        return;

    if(root->lthread == false)
        Rinorder(root->left);

    cout << root->data << " ";

    if(root->rthread == false)
        Rinorder(root->right);
}

// RECURSIVE PREORDER
void Rpreorder(Node* root) {

    if(root == nullptr)
        return;

    cout << root->data << " ";

    if(root->lthread == false)
        Rpreorder(root->left);

    if(root->rthread == false)
        Rpreorder(root->right);
}

// RECURSIVE POSTORDER
void Rpostorder(Node* root) {

    if(root == nullptr)
        return;

    if(root->lthread == false)
        Rpostorder(root->left);

    if(root->rthread == false)
        Rpostorder(root->right);

    cout << root->data << " ";
}

// NON-RECURSIVE INORDER
void inorder(Node* root) {

    if(root == nullptr)
        return;

    Node* ptr = root;

    // Move to leftmost node
    while(ptr->lthread == false)
        ptr = ptr->left;

    while(ptr != nullptr) {

        cout << ptr->data << " ";

        // Follow thread
        if(ptr->rthread == true) {

            ptr = ptr->right;
        }

        else {

            ptr = ptr->right;

            while(ptr->lthread == false)
                ptr = ptr->left;
        }
    }
}

// NON-RECURSIVE PREORDER
void preorder(Node* root) {

    if(root == nullptr)
        return;

    Node* ptr = root;

    while(ptr != nullptr) {

        cout << ptr->data << " ";

        // Move left first
        if(ptr->lthread == false) {

            ptr = ptr->left;
        }

        else if(ptr->rthread == false) {

            ptr = ptr->right;
        }

        else {

            while(ptr != nullptr &&
                  ptr->rthread == true) {

                ptr = ptr->right;
            }

            if(ptr != nullptr)
                ptr = ptr->right;
        }
    }
}

// NON-RECURSIVE POSTORDER
void postorder(Node* root) {

    if(root == nullptr)
        return;

    stack<Node*> st1, st2;

    st1.push(root);

    while(!st1.empty()) {

        Node* temp = st1.top();
        st1.pop();

        st2.push(temp);

        if(temp->lthread == false)
            st1.push(temp->left);

        if(temp->rthread == false)
            st1.push(temp->right);
    }

    while(!st2.empty()) {

        cout << st2.top()->data << " ";
        st2.pop();
    }
}

int main() {

    Node* root = nullptr;

    int n;

    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter node values:\n";

    for(int i = 0; i < n; i++) {

        int val;
        cin >> val;

        root = insert(root, val);
    }

    cout << "\nRecursive Inorder:\n";
    Rinorder(root);

    cout << "\n\nRecursive Preorder:\n";
    Rpreorder(root);

    cout << "\n\nRecursive Postorder:\n";
    Rpostorder(root);

    cout << "\n\nNon-Recursive Inorder:\n";
    inorder(root);

    cout << "\n\nNon-Recursive Preorder:\n";
    preorder(root);

    cout << "\n\nNon-Recursive Postorder:\n";
    postorder(root);

    return 0;
}

/*

PSEUDOCODE ALGORITHM

------------------------------------------------
Algorithm CreateNode(val)

1. Create new node temp

2. temp.data = val

3. temp.left = NULL
   temp.right = NULL

4. temp.lthread = true
   temp.rthread = true

5. Return temp

------------------------------------------------
Algorithm Insert(root, val)

1. ptr = root
   parent = NULL

2. Traverse tree to find insertion position

3. If duplicate found
       Print "Duplicate Value"
       Return root

4. Create new node temp

5. If tree empty
       root = temp

6. Else if val < parent.data

       temp.left = parent.left
       temp.right = parent

       parent.lthread = false
       parent.left = temp

7. Else

       temp.left = parent
       temp.right = parent.right

       parent.rthread = false
       parent.right = temp

8. Return root

------------------------------------------------
Algorithm Recursive Inorder(root)

1. If root == NULL
       Return

2. Traverse left subtree

3. Print root data

4. Traverse right subtree

------------------------------------------------
Algorithm Recursive Preorder(root)

1. If root == NULL
       Return

2. Print root data

3. Traverse left subtree

4. Traverse right subtree

------------------------------------------------
Algorithm Recursive Postorder(root)

1. If root == NULL
       Return

2. Traverse left subtree

3. Traverse right subtree

4. Print root data

------------------------------------------------
Algorithm NonRecursive Inorder(root)

1. Move to leftmost node

2. Repeat until ptr == NULL

       Print ptr data

       If right thread exists
            Follow thread

       Else
            Move to leftmost node
            in right subtree

------------------------------------------------
Algorithm NonRecursive Preorder(root)

1. Start from root

2. Repeat until ptr == NULL

       Print ptr data

       If left child exists
            Move left

       Else if right child exists
            Move right

       Else
            Follow threads upward

------------------------------------------------
Algorithm NonRecursive Postorder(root)

1. Create two stacks st1 and st2

2. Push root into st1

3. While st1 not empty

       Pop node from st1

       Push node into st2

       Push left child into st1

       Push right child into st1

4. Print elements from st2

------------------------------------------------
Time Complexity

Insertion:
O(h)

Traversals:
O(n)

Where:
h = Height of tree
n = Number of nodes

*/