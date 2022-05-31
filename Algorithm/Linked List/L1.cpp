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

void Begining(struct Node** head, int x)
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = x;
    new_node->next = *head;
    *head = new_node;
}

void Traversing(struct Node* head)
{
    int sum=0;
    int n=0;
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        sum = sum + head->data;
        head = head->next;
        n = n + 1;
    }

    cout<<endl;
    cout<<"Sum is "<<sum<<endl;
    cout<<"Average is "<<(double)(sum/n)<<endl;
}

void Searching(struct Node* head, int n)
{
    cout<<"Miju"<<endl;
    int k=0;
    while(head!=NULL)
    {
        if(head->data==n)
        {
            cout<<"The elements "<<n<<" is Presents here"<<endl;
            k = 1;
            return;
        }
        head = head->next;
    }
    if(k==0)
    {
        cout<<"The elements "<<n<<" is not found"<<endl;
    }
}

int main()
{
    struct Node* head = NULL;
    int n;
    cout<<"Enter the elements number: ";
    cin>>n;
    Creat(&head, n);
    Traversing(head);
    Begining(&head, 50);
    Traversing(head);
    Searching(head, 20);
    return 0;
}