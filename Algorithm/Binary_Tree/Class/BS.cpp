#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* left = nullptr, *right=nullptr;
    Node() {}
    Node (int data) : data(data) {}

}

Node *constructBST(vector<int> const &keys)
{
    Node *root = nullptr;
    for(int key: keys)
    {
        root = insert(root, key);
    }
    return root;
}


int main()
{
    vector<int>keys = { 15, 10, 20, 8, 12, 16, 25 };
    Node *root = constructBST(keys);
}