#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

void Creat(struct node** head, int n)
{
    int x;
    cout<<"Enter the elements: ";
    for(int i=0; i<n; i++)
    {
        struct node* newNode = (struct node*)malloc(sizeof(struct node));
        struct node* last = *head;
        cin>>x;
        newNode->data = x;
        newNode->next = NULL;
        if(*head==NULL)
        {
            *head = newNode;
        }
        else
        {
            while (last->next!=NULL)
            {
                last = last->next;
            }
            last->next = newNode;
            
        }
    }
    return;
}

void Traversing(struct node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

void Begining(struct node** head, int x)
{
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = x;
    newNode->next = *head;
    *head = newNode;
}

void After(struct node* prevNode, int x)
{
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = x;
    newNode->next = prevNode->next;
    prevNode->next = newNode;
    
}

void End(struct node** head, int x)
{
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    struct node* last = *head;
    newNode->data = x;
    newNode->next = NULL;
    if(*head==NULL)
        *head = newNode;
    else
    {
        while(last->next!=NULL)
        {
            last = last->next;
        }
        last->next = newNode;
    }

    return;
}

void Searching(struct node* head, int x, int n)
{
    int k=1;
    while(head!=NULL)
    {
        if(head->data==x)
        {
            cout<<"Data "<<x<<" is found."<<endl;;
            After(head, n);
            k=0;
            return;
        }
        head = head->next;
    }
    if(k==1)
    {
        cout<<"Data "<<x<<" is not found in this list."<<endl;;
        End(&head, n);
    }
}

int main()
{
    struct node *head = NULL;
    int n;
    cout<<"Enter the node number: ";
    cin>>n;
    Creat(&head, n);
    Traversing(head);
    Begining(&head, 20);
    cout<<"Traversing after add a node at the beging: ";
    Traversing(head);
    End(&head, 95);
    cout<<"Traversing after add a node at the end: ";
    Traversing(head);
    Searching(head, 45, 50);
    cout<<"Insert a node after a given node: ";
    Traversing(head);
    return 0;

}
