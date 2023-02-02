#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* left=nullptr, *right=nullptr;
    Node(){}
    Node(int data): data(data){};
};

Node* insert(Node* root, int x)
{
    if(root==nullptr) return new Node(x);
    else if(root->data==x)
    {
        cout<<"The node "<<x<<" is presented here and can't add it."<<endl;
        return root;
    }
    else if(root->data<x)   root->right = insert(root->right, x);
    else    root->left = insert(root->left,x);
    return root;
}

Node* cbst(vector<int>const& v)
{
    Node* root = nullptr;
    for(int x:v)
        root = insert(root,x);
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
void postorder(Node* root)
{
    if(root == nullptr) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
void preorder(Node* root)
{
    if(root==nullptr)
        return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

Node* minValueNode(Node* root)
{
    Node* current = root;
    while(current&& current->left!=nullptr)
        current = current->left;
    return current;
}
Node* removeNode(Node* root, int x)
{
    if(root==nullptr)   return root;
    if(root->data<x)
        root->right = removeNode(root->right, x);
    else if(root->data>x)
        root->left = removeNode(root->left, x);
    else
    {
        if(root->left==nullptr&&root->right==nullptr)
        {
            return nullptr;
        }
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

int Size(Node* root)
{
    if(root==nullptr)   return 0;
    return 1 + Size(root->left)+Size(root->right);
}

int maxDepth(Node* root)
{
    if(root==nullptr)
        return 0;
    else
    {
        int rd = maxDepth(root->right);
        int ld = maxDepth(root->left);
        if(ld>rd)
            return ld+1;
        else
            return rd+1;
    }
}

int main()
{
    vector<int>v={45,78,65,98,41,12,36,35};
    Node* root = cbst(v);
    pbst(root);
    int x;
    cout<<"Enter a node for inserting(-1 for terminate): ";
    cin>>x;
    while(x!=-1)
    {
        v.push_back(x);
        root = cbst(v);
        pbst(root);
        cout<<"Enter a node for inserting(-1 for terminate): ";
        cin>>x;
    }

    cout<<"Preorder: ";
    preorder(root);
    cout<<endl;

    cout<<"Inorder: ";
    inorder(root);
    cout<<endl;

    cout<<"Postorder: ";
    postorder(root);
    cout<<endl;

    cout<<"Enter a Node for deleting(-1 for terminate): ";
    cin>>x;
    while(x!=-1)
    {
        removeNode(root,x);
        pbst(root);
        cout<<endl;
        cout<<"Enter a node for deleting(-1 for terminate): ";
        cin>>x;
    }

    cout<<"Size of tree is : "<<Size(root)<<endl;
    cout<<"Depth of the tree is : "<<maxDepth(root)<<endl;

    return 0;

}