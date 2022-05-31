#include<bits/stdc++.h>
#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};

void Traversing(struct Node* head)
{
    while (head!=NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }

    cout<<endl;
    
}

void DataEntery(struct Node** head, int n)
{
    int x;
    for(int i=1; i<=n; i++)
    {
        cout<<"Enter data "<<i<<" : ";
        cin>>x;
        struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
        new_node->data = x;
        new_node->next = (*head);
        (*head) = new_node;
    }
}

void InsertAfter(struct Node* prev_node, int x)
{
    if(prev_node==NULL)
    {
        cout<<"The given previous node is required, can not be NULL";
        return;
    }

    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = x;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

void Append(struct Node** head, int x)
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    struct Node* last = *head;
    new_node->data = x;
    new_node->next = NULL;
    if(*head==NULL)
    {
        *head = new_node;
        return;
    }

    while (last->next !=NULL)
    {
        last = last->next;
    }
    last->next = new_node;
    return; 
}

int main()
{
    struct Node* head = NULL;
    DataEntery(&head, 5);
    Traversing(head);

    InsertAfter(head->next, 50);
    Traversing(head);

    Append(&head, 12);
    Traversing(head);

    return 0;
}