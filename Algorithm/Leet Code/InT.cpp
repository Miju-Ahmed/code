#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node* left;
    struct node* right;
};

struct node* newNode(int data)
{
    struct node* node = (struct node*) malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return (node);
}

void printInorder(struct node* node)
{
    if(node == NULL)
        return;
    printInorder(node->left);
    cout<<node->data;<<" ";
    printInorder(node->right);
}

int main()
{
    struct node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->right = newNode(4);
    root->left->right = newNode(5);
    printInorder(root);
    return 0;

}
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
// class Solution {
// public:
//     void inorderTraversalhelper(vector<int>& ans, TreeNode* root)
//     {
//         if(root==NULL)
//             return;
//         else
//         {
//             inorderTraversalhelper(ans, root->left);
//             ans.push_back(root->val);
//             inorderTraversalhelper(ans, root->right);
//         }
//     }
//     vector<int> inorderTraversal(TreeNode* root) {
//         vector<int> ans;
//         inorderTraversalhelper(ans, root);
//         return ans;
//     }
// };