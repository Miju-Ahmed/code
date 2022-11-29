#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
void create(struct node **head, int n)
{
    int x;
    cout<<"Enter the elements: \n";
    for(int i=0; i<n; i++)
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
                last = last->next;
            last->next = newNode;
        }  
    }
}

void traversing(struct Node* head)
{

}

int main()
{
    int n;
    cin>>n;
    struct Node* head = NULL;
    create(&head, n);
    traversing(head);
}