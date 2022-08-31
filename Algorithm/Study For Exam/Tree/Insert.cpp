#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node* newNode(int data)
{
    struct node* node = (struct node*) malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

void print(struct node* root, int space = 0, int height = 10)
{
    if(root==NULL)
        return;
    space += height;
    print(root->right, space);
    cout<<endl;
    for(int i = height; i<space; i++)
    {
        cout<<' ';
    }
    cout<<root->data;
    cout<<endl;
    print(root->left, space);
    cout<<endl;
}

int main()
{
    int n;
    cout<<"Enter the node number: ";
    cin>>n;
    int x;
    cout<<"Enter the root node: ";
    cin>>x;
    struct node* root = newNode(x);
    n = n-1;
    while (n!=0)
    {
        cout<<"Enter the node value: ";
        cin>>x;
        char p;
        cout<<"Enter the position: ";
        cin>>p;
        if(p=='l')
        {
            root->left = newNode(x);
        }
        if(p=='r')
        {
            root->right = newNode(x);
        }
        n--;
    }

    print(root);
    return 0;
    
}