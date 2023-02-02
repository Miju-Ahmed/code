#include<bits/stdc++.h>
uisng namespace std;

struct Node{
    int key;
    struct Node *left, *right;
};

struct Node *newNode(int item){
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
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
    }
}

struct Node*insert(struct Node* Node, int key)
{
    if(Node==NULL)  return newNode(key);
    if(key<Node->key)
        Node->left = insert(Node->left, key);
    else
        
}

int main()
{
    struct Node* root = NULL;
    cout<<"Enter the elements(-1 for stop entering elements): "<<endl;
    int x;  cin>>x;
    root = insert(root, x);
    while(x!=-1)
    {

    }
}