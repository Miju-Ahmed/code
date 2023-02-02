#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    struct Node *left, *right;
};


struct Node* newNode(int item)
{
    struct Node *temp = (struct Node)malloc(sizeof(struct Node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}


void inorder(struct Node* root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<root->key<<" ->";
        inorder(root->right);
        cout<<root->key<<" ->";
    }
}


struct Node* insert(struct Node* Node, int key)
{
    if(Node==NULL)
        return newNode(key);
    if(key<Node->key)
        Node->left = insert(Node->left, key);
    else
        Node->right = insert(Node->right, key);
    return Node;
}


struct Node *minValueNode(struct Node *Node)
{
    struct Node *current = Node;
    while(current && current->left!=NULL)
    {
        current = current->left;
    }

    return current;
}


int main()
{
    struct Node* root = NULL;
    int x;
    cin>>x;
    while(x!=)
}