#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
};

struct Node1
{
    int data;
    struct Node1* next;
}

void Traversing(struct Node* head)
{
    while (head!=NULL)
    {
        /* code */
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
    
}

void PushData(struct Node** head, int n)
{
    int x;
    cout<<"Enter the elements: "<<endl;
    for(int i=1; i<=n; i++)
    {
        cout<<"Enter elements "<<i<<" :";
        cin>>x;
        struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
        struct Node* last = *head;
        new_node->data = x;
        new_node->next = NULL;
        if(*head==NULL)
        {
            *head = new_node;
        }
        else
        {
            while (last->next!=NULL)
            {
                /* code */
                last = last->next;
            }
            last->next = new_node;
            
        }
    }
}
void Begining(struct Node** head, int x)
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = x;
    new_node->next = *head;
    *head = new_node;
}

void Searching(struct Node* head, int x)
{
    int k=0;
    while(head!=NULL)
    {
        if(head->data==x)
        {
            cout<<"The elements "<<x<<" is found"<<endl;
            k=1;
            return;
        }
    }
    if(k==0)
    {
        cout<<"The elements "<<x<<" is not found"<<endl;
        return;
    }

}

void Merging(struct Node *head, struct Node1* head1)
{
    while(head!=NULL)
    {
        if(head->next==NULL)
        {
            while (head1!=NULL)
            {
                head = head1;
                head1 = head1->next;
            }
            
        }
    }
}

