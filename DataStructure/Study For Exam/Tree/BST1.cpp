#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left = nullptr, *right = nullptr;
    Node(){}
    Node(int data): data(data){};
};

Node* insert(Node* root, int key)
{
    if(root==nullptr)   return new Node(key);
    else if(key<root->data) root->left = insert(root->left, key);
    else root->right = insert(root->right, key);
    return root;
}

Node* ConstructBST(vector<int>const &keys)
{
    Node* root = nullptr;
    for(int key:keys)   root = insert(root, key);
    return root;
}

void printBST(Node* root, int space=0, int height=10)
{
    if(root == nullptr) return;
    space += height;
    printBST(root->right, space);
    cout<<endl;
    for(int i=height; i<space; i++) cout<<' ';
    cout<<root->data;
    cout<<endl;
    printBST(root->left, space);
}

void inorder(Node* root)
{
    if(root==nullptr)   return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void deleteNode(Node* &root, int key)
{
    Node* parent = nullptr;
    Node* curr = root;
    searchKey(curr, key, parent);
    if(curr==nullptr)   return;

    if(curr->left==nullptr && curr->right==nullptr)
    {
        if(curr!=root)
            parent->left = nullptr;
        else
            parent->right = nullptr;
        free(curr);
    }
}

int main()
{
    vector<int> keys = {45,42,36,65,45};
    Node* root = ConstructBST(keys);
    printBST(root);
    int x;
    cin>>x;
    while(x!=-1)
    {
        keys.push_back(x);
        root = ConstructBST(keys);
        cout<<"Tree after adding node "<<x<<" is : ";
        printBST(root);
        cout<<"Enter the elements of tree: ";
        cin>>x;
    }

    inorder(root);
    return 0;
}