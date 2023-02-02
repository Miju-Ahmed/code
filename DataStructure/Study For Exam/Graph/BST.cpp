#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* left=nullptr, *right = nullptr;
    Node(){}
    Node(int data): data(data){};
};

Node* insert(Node* root, int x)
{
    if(root==nullptr) return new Node(x);
    if(root->data==x){cout<<"Data already presented."; return;}
    if(root->data>x) root->left = insert(root->left, x);
    else root->right - insert(root->right, x);
    return root;
}

Node* cbst(vector<int>const& keys)
{
    Node* root = nullptr;
    for(int key: keys)
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

Node* minValue(Node* root)
{
    Node* current = root;
    while(current&& current->left!=nullptr)
        current = current->left;
    return current;
}

Node* removeNode(Node* root, int x)
{
    if(root==nullptr)   return root;
    else if(root->data<x)
        root->left = removeNode(root->left, x);
    else if(root->data>x)
        root->right = removeNode(root->right, x);
    else
    {
        if(root->left ==nullptr && root->right == nullptr)
            return nullptr;
        else if(root->left == nullptr)
        {
            Node* temp = root->right;
            free(root);
            return temp;
        }
        else if(root->right == nullptr)
        {
            Node* temp = root->left;
            free(root);
            return temp;
        }

        Node* temp = minValue(root->right);
        root->data = temp->data;
        root->right = removeNode(root->right, temp->data);
    }
}

int main()
{
    vector<int>v = {45,8,6,9,78,96,56,23,10,47};
    Node* root = cbst(v);
    pbst(root);
}