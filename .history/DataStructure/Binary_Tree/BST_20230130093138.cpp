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
    
}