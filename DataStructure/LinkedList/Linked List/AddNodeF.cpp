#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

void push(Node** head, int nd)
{
    Node* nn = new Node();
    nn->data = nd;
    nn->next = *head;
    *head = nn;
}

void push1(Node** head, int new_data)
{
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = *head;
    *head = new_node;
}

int main()
{
    struct Node* d = NULL;
    push(&d, 5);
    cout<<d->data<<endl;
    d->data = 7;
    d->next = NULL;
    cout<<d->data<<endl;
    for(int i=0; i<10; i++)
    {
        int m;
        cin>>m;
        push1(&d, m);
    }

    while (d!=NULL)
    {
        cout<<d->data<<" ";
    }
    cout<<endl;
    
    return 0;
}