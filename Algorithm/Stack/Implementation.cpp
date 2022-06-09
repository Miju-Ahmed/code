#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};
void push(struct Node** head, int data)
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    if(new_node==NULL)
    {
        cout<<"Memory not allocated"<<endl;
        return;
    }

    new_node->data = data;
    new_node->next = *head;
    *head = new_node;
}

void Traversing(struct Node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

int pop(struct Node** head)
{
    struct Node *temp = *head, *prev;
    *head = temp->next;
    return temp->data;
}

int main()
{
    struct Node* head = NULL;
    push(&head, 20);
    push(&head, 50);
    push(&head, -78);
    push(&head, 789);
    push(&head, -12);
    cout<<"Linked List is : ";
    Traversing(head);
    cout<<"The data "<<pop(&head)<<" is deleted."<<endl;
    cout<<"After delete a data Linked List is : ";
    Traversing(head);
    cout<<"The data "<<pop(&head)<<" is deleted."<<endl;
    cout<<"After delete a data Linked List is : ";
    Traversing(head);

    return 0;
}