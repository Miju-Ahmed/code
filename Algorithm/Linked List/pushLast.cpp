#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
};

void Last(struct Node** head, int n)
{
    int x;
    cout<<"Enter the elements: "<<endl;
    for(int i=1; i<n; i++)
    {
        cout<<"Enter elements "<<i<<" ";
        cin>>x;
        struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
        struct Node* last = *head;
        new_node->data = x;
        new_node->next = NULL;
        if(*head==NULL)
        {
            *head = new_node;
        }
        while(last->next!=NULL)
        {
            last = last->next;
        }
        last->next = new_node;
    }
}

void append(struct Node** head, int n)
{
    int x;
    for(int i=1; i<=n; i++)
    {
        cin>>x;
        struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
        struct Node* last = *head;
        new_node->data = x;
        new_node->next = NULL;

        if(*head==NULL)
        {
            *head = new_node;
        }
        while (last->next!=NULL)
        {
            last = last->next;
        }
        last->next = new_node;
        
    }
}

void Traversing(struct Node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
}

int main()
{
    struct Node* head = NULL;
    Last(&head, 10);
    //append(&head, 7);
    Traversing(head);
    return 0;
}