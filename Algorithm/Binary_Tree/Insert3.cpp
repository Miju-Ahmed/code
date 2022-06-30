#include<bits/stdc++.h>
using namespace std;

struct node
{
    int key;
    struct node* left;
    struct node* right;
};

struct node *getNewNode(int val)
{
    struct node *newNode = malloc(sizeof(struct node));
    newNode->key = val;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

struct node *insert(struct node *root, int val)
{
    if(root == NULL)
        return getNewNode(val);
    
    if(root->key<val)
        root->right = insert(root->right, val);
    else if(root->key>val)
        root->left = insert(root->left, val);
    
    return root;
}

void inorder(struct node *root)
{
    if(root == NULL)
        return;
    inorder(root->left);
    cout<<root->key;
    inorder(root->right);
}

int main()
{
    int n;
    cout<<"Enter the node number: ";
    cin>>n;
    struct node *root = NULL;
    cout<<"Enter the node: "<<endl;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        root = insert(root, x);
    }
    inorder(root);
    return 0;
}