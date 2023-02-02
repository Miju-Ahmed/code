#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* left=nullptr,*right = nullptr;
    Node(){}
    Node(int data):data(data){};
};

Node* insert(Node* root, int x)
{
    if(root==nullptr)   return new Node(x);
    else if(root->data>x)
        root->left = insert(root->left, x);
    else if(root->data<x)
        root->right = insert(root->right, x);
    return root;
}

Node *cbst(vector<int>const& keys)
{
    Node* root = nullptr;
    for(int key:keys)
        root = insert(root, key);
    return root;
}

void pbst(Node* root, int space=0, int height = 10)
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

Node* minValueNode(Node* root)
{
    Node* current = root;
    while(current&&current->left!=nullptr)
    {
        current = current->left;
    }
    return current;
}

Node* removeNode(Node* root, int x)
{
    if(root==nullptr)   return root;
    else if(root->data<x)
        root->right = removeNode(root->right, x);
    else if(root->data>x)
        root->left = removeNode(root->left, x);
    else
    {
        if(root->left==nullptr&&root->right==nullptr)
            return nullptr;
        else if(root->left==nullptr)
        {
            Node* temp = root->right;
            free(root);
            return temp;
        }
        else if(root->right==nullptr)
        {
            Node* temp = root->left;
            free(root);
            return temp;
        }

        Node* temp = minValueNode(root->right);
        root->data = temp->data;
        root->right = removeNode(root->right, temp->data);
    }
    return root;
}



int main()
{
    vector<int>keys = {45,87,36,65,55};
    Node* root = cbst(keys);
    pbst(root);
    int x;
    cout<<"Enter the new Value: ";
    cin>>x;
    while(x!=-1)
    {
        keys.push_back(x);
        root = cbst(keys);
        pbst(root);
        cout<<"Enter the Node: ";
        cin>>x;
    }

    cout<<"Enter the node for deleting: ";
    cin>>x;
    while(x!=-1)
    {
        removeNode(root, x);
        pbst(root);
        cout<<endl;
        cout<<"Enter node: ";
        cin>>x;
    }
}