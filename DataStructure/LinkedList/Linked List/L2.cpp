#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
};

void Creat(struct Node** head, int n)
{
    int x;
    cout<<"Enter the elements: "<<endl;
    for(int i=1; i<=n; i++)
    {
        struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
        struct Node* last = *head;
        cout<<"Enter elements "<<i<<" : ";
        cin>>x;
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
                last = last->next;
            }
            last->next = new_node;
            
        }
    }
    return;
}

void Traversing(struct Node* head)
{
    double sum=0;
    double average;
    int n = 0;
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        sum = sum + head->data;
        head = head->next;
        n = n+ 1;
    }
    average = (double)(sum/n);
    cout<<"\nTotal is "<<sum<<"\nAverage is : "<<average<<endl;
}

int main()
{
    struct Node* head = NULL;
    Creat(&head, 6);
    Traversing(head);
    return 0;
}