#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
};

void InsertBegining(struct Node** head, int x)
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = x;
    new_node->next = *head;
    *head = new_node;
}

void Insert(struct Node** head, int n)
{
    int x;
    for(int i=1; i<=n; i++)
    {
        struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
        struct Node* last = *head;
        cout<<"Enter elements "<<i<<": ";
        cin>>x;
        new_node->data = x;
        new_node->next = NULL;
        if(*head==NULL)
        {
            *head = new_node;
        }
        else
        {
            while(last->next!=NULL)
            {
                last = last->next;
            }
            last->next = new_node;
        }
    }
    
}

void Traversing(struct Node* head)
{
    while (head!=NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
    
}

int main()
{
    struct Node *head = NULL;
    int n;
    cout<<"Enter elements number: ";
    cin>>n;
    Insert(&head, n);
    Traversing(head);
    InsertBegining(&head, -45);
    Traversing(head);
    return 0;
}