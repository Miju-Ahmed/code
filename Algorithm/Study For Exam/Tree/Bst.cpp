#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* left = nullptr;
    struct Node* right = nullptr;
    Node (){}
    Node(int data): data(data){};
}

void Insert(Node)

Node* constructorBST(vector<int>const &keys)
{
    Node *root = nullptr;
    for(int key: keys)
    {
        Insert(root, key);
    }
    return root;
}

int main()
{
    vector<int>keys;
    int x;
    cout<<"Enter the root node of this tree: ";
    cin>>x;
    keys.push_back(x);
    Node *root = constructorBST(keys);
    while(x!=-1)
    {
        keys.push_back(x);
        root = constructorBST(keys);
        cout<<"The tree is: "<<endl;
        printBST(root);
        cin>>x;
    }
    return 0;

}