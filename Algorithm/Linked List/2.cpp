#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};

void InsertData(struct Node** head, int n)
{
    int x;
    cout<<"Enter the elements: "<<endl;
    for(int i=1; i<=n; i++)
    {
        cout<<"Enter the data "<<i<<" :";
        cin>>x;
        struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
        new_node->data = x;
        new_node->next = *head;
        *head = new_node;
    }
}

void Treversing(struct Node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
}

int main()
{
    struct Node* head = new Node();
}