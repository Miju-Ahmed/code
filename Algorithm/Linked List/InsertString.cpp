#include<bits/stdc++.h>
using namespace std;

struct Node
{
    string data;
    struct Node* next;
};

void Insert(struct Node** head, int n)
{
    string x;
    for(int i=1; i<=n; i++)
    {
        struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
        struct Node* last = *head;
        if(new_node==NULL)
        {
            cout<<"Memory not allocated."<<endl;
            return;
        }
        cout<<"Enter data "<<i<<" : ";
        getline(cin, x);
        new_node->data = x;
        new_node->next = NULL;
        if(*head==NULL)
        {
            *head = new_node;
        }
        else
        {
            while(last!=NULL)
            {
                last = last->next;
            }
            last->next = new_node;
        }
    }
}

void Traversing(struct Node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

int main()
{
    struct Node* head = NULL;
    int n;
    cout<<"Enter the elements number: ";
    cin>>n;
    Insert(&head, n);
    Traversing(head);
    return 0;
}