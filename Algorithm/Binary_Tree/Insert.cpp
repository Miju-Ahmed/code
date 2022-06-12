#include<bits/stdc++.h>
uaing namespace std;

class Node
{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int val)
        {
            data = val;
            left = NULL;
            right = NULL;
        }
};

int main()
{
    Node* root = new Node();
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->left->left = new Node(10);
    root->left->left->right = new Node(45);
    return 0;
}