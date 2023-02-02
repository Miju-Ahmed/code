#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* left = nullptr, *right = nullptr;

    Node(){}
    Node(int data): data(data){}
};

void Insert(Node* &root, int key)
{
    if(root==nullptr)
    {
        root = new Node(key);
        return;
    }
    if(root->data==key)
    {
        cout<<key<<" is already present."<<endl;
        return;
    }

    if(key<root->data)
    {
        Insert(root->left, key);
    }
    else
    {
        Insert(root->right, key);
    }
}

Node* constructorBST(vector<int> const &keys)
{
    Node *root = nullptr;
    for(int key: keys)
    {
        Insert(root, key);
    }
    return root;
}

void printBST(Node *root, int space = 0, int height=10)
{
    if(root == nullptr)
    {
        return;
    }

    space += height;

    printBST(root->right, space);
    cout<<endl;

    for(int i=height; i<space; i++)
    {
        cout<<' ';
    }
    cout<<root->data;
    cout<<endl;
    printBST(root->left, space);

}

int main()
{
    vector<int> keys;
    int x;
    cout<<"Enter the elements of tree: ";
    cin>>x;
    keys.push_back(x);
    Node* root = constructorBST(keys);
    while (x!=-1)
    {
        //cin>>x;
        keys.push_back(x);
        root = constructorBST(keys);
        cout<<"The tree is : "<<endl;
        printBST(root);
        cout<<"Enter the elements of tree: ";
        cin>>x;
    }
    
    return 0;
    
}
