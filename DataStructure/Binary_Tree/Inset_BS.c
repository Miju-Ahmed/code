#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct BinaryTree
{
    int data;
    struct BinaryTree *left;
    struct BinaryTree *right;
}node;

node* Insert(node* head, int value)
{
    _Bool flag = true;
    for(node *temp = head; flag == true; (temp=(value>=temp->data)?(temp->right):(temp->left)))
    {
        if(temp==NULL)
        {
            temp = (node*)malloc(sizeof(node*));
            temp->data = value;
            temp->left = NULL;
            temp->right = NULL;
            flag = false;
        }
    }
    return head;
}

void InorderTraversal(node* head)
{
    if(head==NULL)
    {
        return;
    }

    InorderTraversal(head->left);
    printf("%d",head->data);
    InorderTraversal(head->right);
}

int main()
{
    node *head = NULL;
    for(int i=0; i<40; i++)
    {
        head= Insert(head, i);
    }

    InorderTraversal(head);

    return 0;
}
