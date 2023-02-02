#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int roll;
    struct Node* next;
}

void Add(struct Node** head, int data)
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->roll = data;
    new_node->next = *head;
    *head = new_node;
}

void Print(struct Node* head)
{
    while(*head != NULL)
    {
        cout<<head->roll<<" ";
        head = head->next;
    }
}

int main()
{
    struct Node* head = NULL;
    Add(&head, 15);
    Add(&head, 78);
    Add(&head, -89);
    Print(head);
    return 0;
}