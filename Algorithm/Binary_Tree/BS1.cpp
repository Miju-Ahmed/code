#include <iostream>
#include <vector>
using namespace std;
 
struct Node
{
    int data;
    Node* left = nullptr, *right = nullptr;
 
    Node() {}
    Node(int data): data(data) {}
};
 
void inorder(Node* root)
{
    if (root == nullptr) {
        return;
    }
 
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
 
Node* insert(Node* root, int key)
{
    if (root == nullptr) {
        return new Node(key);
    }
 
    if (key < root->data) {
        root->left = insert(root->left, key);
    }
    else {
        root->right = insert(root->right, key);
    }
 
    return root;
}
 
Node* constructBST(vector<int> const &keys)
{
    Node* root = nullptr;
    for (int key: keys) {
        root = insert(root, key);
    }
    return root;
}

void printBinaryTree(Node* root, int space = 0, int height = 10)
{
    if (root == nullptr) {
        return;
    }
 
    space += height;
 
    printBinaryTree(root->right, space);
    cout << endl;
 
    for (int i = height; i < space; i++) {
        cout << ' ';
    }
    cout << root->data;
 
    cout << endl;
    printBinaryTree(root->left, space);
}

void deleteNode(Node* &root, int key)
{
    Node* parent = nullptr;
    Node* curr = root;
    searchKey(curr, key, parent);
    if(curr == nullptr)
    {
        return;
    }

    if(curr->left == nullptr && curr->right==nullptr)
    {
        if(curr!=root)
        {
            if(parent->left==curr)
            {
                parent->left = nullptr;
            }
            else
            {
                parent->right = nullptr;
            }
        }
        free(curr);
    }
    else if(curr->left&&curr->right)
    {
        Node* successor = getMinimumKey(curr->right);
        int val = successor->data;
        deleteNode(root, successor->data);
        curr->data = val;
    }
    else
    [
        Node* child = (curr->left)? curr->left
    ]
}
 
int main()
{
    vector<int> keys = { 15, 10, 20, 8, 12, 16, 25 };

 
    Node* root = constructBST(keys);
    inorder(root);
    
    printBinaryTree(root);

    int x;
    while (x!=-1)
    {
        cin>>x;
        keys.push_back(x);
        Node* root = constructBST(keys);
        printBinaryTree(root);
    }
    
    return 0;
}