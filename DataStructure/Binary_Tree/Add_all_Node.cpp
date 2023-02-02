#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left=nullptr,*right=nullptr;
    Node(){}
    Node(int data):data(data){}
};

void insert(Node* root, int key)
{
    
}

void modifyBSTUtil(struct Node *root, int *sum)
{
    if(root==nullptr)
    {
        return;
    }
    modifyBSTUtil(root->right, sum);
    *sum += root->data;
    root->data = *sum;
    modifyBSTUtil(root->left, sum);
}

void modifyBST(struct Node *root)
{
    int sum=0;
    modifyBSTUtil(root,&sum);
}