/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

struct Node {
    int data;         
    Node* left;       
    Node* right;     
    int height;       

    Node(int value) : data(value), left(nullptr), right(nullptr), height(1) {}
};
int getHeight(Node* node) {
    return node ? node->height : 0;
}

int getBalanceFactor(Node* node) {
    return node ? getHeight(node->left) - getHeight(node->right) : 0;
}

Node* rotateRight(Node* y) {
    Node* x = y->left;
    Node* T2 = x->right;

    x->right = y;
    y->left = T2;

    y->height = max(getHeight(y->left), getHeight(y->right)) + 1;
    x->height = max(getHeight(x->left), getHeight(x->right)) + 1;

    return x;
}

Node* rotateLeft(Node* x) {
    Node* y = x->right;
    Node* T2 = y->left;

    y->left = x;
    x->right = T2;

    x->height = max(getHeight(x->left), getHeight(x->right)) + 1;
    y->height = max(getHeight(y->left), getHeight(y->right)) + 1;

    return y;
}

Node* insertAVL(Node* root, int value) {
    if (!root) return new Node(value);
    if (value < root->data)
        root->left = insertAVL(root->left, value);
    else if (value > root->data)
        root->right = insertAVL(root->right, value);
    else
        return root; 
    root->height = 1 + max(getHeight(root->left), getHeight(root->right));

    int balance = getBalanceFactor(root);

    if (balance > 1 && value < root->left->data)
        return rotateRight(root);
    if (balance < -1 && value > root->right->data)
        return rotateLeft(root);
    if (balance > 1 && value > root->left->data) {
        root->left = rotateLeft(root->left);
        return rotateRight(root);
    }
    if (balance < -1 && value < root->right->data) {
        root->right = rotateRight(root->right);
        return rotateLeft(root);
    }

    return root;
}
void inOrderTraversal(Node* root) {
    if (!root) return;

    inOrderTraversal(root->left);
    cout << root->data << " ";
    inOrderTraversal(root->right);
}

int main() {
    Node* root = nullptr;

    cout << "Enter values to insert into the tree (-1 to stop):" << endl;
    while (true) {
        int value;
        cin >> value;
        if (value == -1) break;
        root = insertAVL(root, value); 
    }

    cout << "\nIn-order Traversal of AVL Tree: ";
    inOrderTraversal(root);

    return 0;
}
