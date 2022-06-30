#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left, *right;
    Node(int data)
    {
        this->data = data;
        this->left = this->right = nullptr;
    }
};

void printBinaryTree(Node* root, int space = 0, int height = 10)
{
    if(root == nullptr)
        return;
    
    space += height;
    printBinaryTree(root->right, space); 
    cout<<endl;
    for(int i=height; i<space; i++)
    {
        cout<<' ';   
    }
    cout<<root->data;
    cout<<endl;
    printBinaryTree(root->left, space);
    cout<<endl;  
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    printBinaryTree(root);
    return 0;
}