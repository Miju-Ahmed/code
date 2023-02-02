#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* left = nullptr, *right = nullptr;
    Node(){}
    Node(int data):data(data){};
};

Node *insert(Node* root, int key)
{
    if(root==nullptr)   return new Node(key);
    else if(root->data>key) root->left = insert(root->left, key);
    else    root->right = insert(root->right, key);
    return root;
}

Node *cbst(vector<int>const &keys)
{
    Node* root = nullptr;
    for(int key:keys)
        root = insert(root, key);
    return root;
}

void pbst(Node* root, int space=0, int height=10)
{
    if(root==nullptr)   return;
    space += height;
    pbst(root->right, space);
    cout<<endl;

    for(int i=height; i<space; i++)
        cout<<' ';
    cout<<root->data;
    cout<<endl;
    pbst(root->left, space);
}

void inorder(Node* root)
{
    if(root==nullptr)   return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void preorder(Node* root)
{
    if(root==nullptr)   return;
    cout<<" "<<root->data;
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node* root)
{
    if(root==nullptr)   return;
    postorder(root->right);
    postorder(root->left);
    cout<<root->data<<" ";
}

int main()
{
    vector<int> keys = {45,42,36,65,55};
    Node* root = cbst(keys);
    pbst(root);
    int x;
    cout<<"Enter the elements of tree: ";
    cin>>x;
    while(x!=-1)
    {
        keys.push_back(x);
        root = cbst(keys);
        cout<<"Tree after adding node "<<x<<" is : ";
        pbst(root);
        cout<<"Enter the elements of tree: ";
        cin>>x;
    }
    inorder(root);
    cout<<endl;
    preorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;

    return 0;
}