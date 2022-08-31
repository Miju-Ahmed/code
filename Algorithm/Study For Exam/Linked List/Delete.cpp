#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node* next;
};

void Creat(struct node** head, int n)
{
    int x;
    cout<<"Enter the elements: ";
    for(int i=1; i<=n; i++)
    {
        struct node* newNode = (struct node*)malloc(sizeof(struct node));
        struct node* last = *head;
        cin>>x;
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
    }
    return;
}

void Searching(struct node* head, int x)
{
    
    int k=0;
    while (head!=NULL)
    {
        if(head->data==x)
        {
            cout<<"The elements "<<x<<" is found in this list.";
            k=1;
            return;
        }
        head = head->next;
    }
    if(k==0)
        cout<<"The elements "<<x<<" is not found in this list.";
    return;
    
}

void Delete(struct node** head, int x)
{
    struct node* temp = *head, *prev;
    if(temp!=NULL&&temp->data==x)
    {
        *head = temp->next;
        free(temp);
        return;
    }

    while(temp!=NULL&&temp->data!=x)
    {
        prev = temp;
        temp = temp->next;
    }

    if(temp==NULL)
        return;
    prev->next = temp->next;

    free(temp);
}

void Traversing(struct node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head  = head->next;
    }
    cout<<endl;
}

int main()
{
    struct node* head = NULL;
    int n;
    cout<<"Enter the elements number: ";
    cin>>n;
    Creat(&head, n);
    cout<<"The List data are: ";
    Traversing(head);
    Searching(head, 10);
    return 0;
}

void Delete(struct node** head, int x)
{
    struct node* temp = *head, *prev;
    if(temp==NULL && temp->data==x)
    {
        *head = temp->next;
        free(temp);
        return;
    }

    while(temp!=NULL && temp->data !=x)
    {
        prev = temp;
        temp = temp->next;
    }

    if(temp==NULL)
        return;
    prev->next = temp->next;

    free(temp);
}