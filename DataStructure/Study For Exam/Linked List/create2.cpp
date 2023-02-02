#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int value;
    struct Node* next;
};

void Create_New_Node(struct Node** head, int n)
{
    int x;
    cout<<"Enter the data: ";
    for(int i=0; i<n; i++)
    {
        cin>>x;
        struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
        struct Node* last = *head;
        temp->value = x;
        temp->next = NULL;
        if(*head==NULL)
        {
            *head = temp;
        }
        else
        {
            while(last->next!=NULL)
                last = last->next;
            last->next = temp;
        }
    }
}

void Traversing(struct Node* head)
{
    cout<<"\nThe data are: ";
    while(head!=NULL)
    {
        cout<<head->value<<" ";
        head = head->next;
    }
}

void Searching(struct Node* head, int x)
{
    while(head!=NULL)
    {
        if(head->value==x)
        {
            cout<<"\nThe value "<<x<<" is present in this list\n";
            return;
        }
        head = head->next;
    }
    cout<<"\nThe value "<<x<<" is not found in this list.\n";
}

void Begining(struct Node** head, int x)
{
    struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
    temp->value = x;
    temp->next = *head;
    *head = temp; 
}

// void Before_Node(struct Node* head, int x)
// {
//     struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
//     temp->value = x;
//     temp->next = *head;
//     head->next = temp;
// }

void Deleting(struct Node **head, int x)
{
    struct Node *temp = *head, *prev;
    if(temp!=NULL && temp->value ==x)
    {
        *head = temp->next;
        free(temp);
        return;
    }

    while(temp!=NULL&&temp->value!=x)
    {
        prev = temp;
        temp = temp->next;
    }

    if(temp==NULL) {cout<<"Value is not find here.\n"; return;}

    prev->next = temp->next;
    free(temp);
}

void Sorting(struct Node** head)
{
    struct Node* current = *head, *index = NULL;
    int temp;
    if(head == NULL) return;
    else
    {
        while(current!=NULL)
        {
            index = current->next;
            while(index!=NULL)
            {
                if(current->value > index->value)
                {
                    temp = current->value;
                    current->value = index->value;
                    index->value = temp;
                }
                index = index->next;
            }
            current = current->next;
        }
    }
}

void Sorting1(struct Node** head)
{
    struct Node* current = *head, *pos = NULL;
    int temp;
    if(head==NULL){return;}

    while(current!=NULL)
    {
        pos = current->next;
        while(pos!=NULL)
        {
            if(current->value<pos->value)
            {
                temp = current->value;
                current->value = pos->value;
                pos->value = temp;
            }
            pos = pos->next;
        }
        current = current->next;
    }
}

int main()
{
    struct Node* head = NULL;
    int n;
    cin>>n;
    Create_New_Node(&head, n);
    Traversing(head);
    Searching(head, 50);
    Begining(&head, 100);
    Traversing(head);
    // Searching(head, 200);
    // Traversing(head);
    Deleting(&head, 6);
    Traversing(head);
    Sorting(&head);
    Traversing(head);
    Sorting1(&head);
    Traversing(head);
    return 0;
}