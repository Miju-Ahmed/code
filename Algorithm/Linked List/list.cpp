#include<bits/stdc++.h>
using namespace std;

struct Node 
{
    int data;
    struct Node* next;
};
void Traversing(struct Node* head)
{
    while(*head!=NULL)
    {
        cout<<*head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

void InsertData(struct Node **head, int n)
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    struct Node* last = *head;
    int x;
    cout<<"Enter the data: "<<endl;
    for(int i=1; i<=n; i++)
    {
        cout<<"Enter element : "<<i<<" : ";
        cin>>x;
        new_node->data = x;
        new_node->next = NULL;
        if(*head==NULL)
        {
            head = new_node;
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


int main()
{
    struct Node *head = NULL;
    InsertData(&head, 5);
    Traversing(head);

    return 0;
}