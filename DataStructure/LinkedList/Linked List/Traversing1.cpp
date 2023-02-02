#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int roll;
    char name[50];
    struct Node *next;
};

void Traversing(struct Node *head)
{
        while (head!=NULL)
    {
        cout<<head->roll<<endl;
        cout<<head->name<<endl;
        head = head->next;
    }
    
}

void InsertAtBegining(struct Node** head, int data, char nam[])
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->roll = data;
    strcpy(new_node->name, nam);
    new_node->next = *head;
    *head = new_node;
}


void InsertAtLast(struct Node **head, int data, char nam[])
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    struct Node* last= *head;
    new_node->roll = data;
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
    Node *head = NULL;
    push(&head, 5);
    push(&head, 10);
}