#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
};

void createNewNode(struct Node**head, int n)
{
    int x;
    cout<<"Enter the data: ";
    for(int i=0; i<n; i++)
    {
        struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
        struct Node* last = *head;

        cin>>x;
        temp->data = x;
        temp->next = NULL;

        if(*head==NULL)
            *head = temp;
        else
        {
            while(last->next!=NULL)
            {
                last = last->next;
            }
            last->next = temp;
        }
    }
}

void create(struct Node** root, int n)
{
    int x;
    for(int i=0; i<n; i++)
    {
        struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
        struct Node* last = *root;

        cin>>x;
        temp->data = x;
        temp->next = NULL;
        if(*root==NULL)
            *root = temp;
        else
        {
            while(last->next!=NULL)
                last = last->next;
            last->next = temp;
        }
    }
}

void Begining(struct Node** root, int x)
{
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = *root;
    *root = temp;
}

void traversing(struct Node* root)
{
    if(root==NULL)
        return;
    while(root!=NULL)
    {
        cout<<root->data<<" ";
        root = root->next;
    }
    cout<<endl;
}

void searching(struct Node* root, int x)
{
    while(root!=NULL)
    {
        if(root->data==x)
        {
            cout<<"Find"<<endl;
            return;
        }
        root = root->next;
    }
    cout<<"Not find"<<endl;
}

void Deleting(struct Node**root, int x)
{
    struct Node* temp = *root, *prev;

    if(temp!=NULL && temp->data==x)
    {
        *root = temp->next;
        free(temp);
        return;
    }
    while(temp!=NULL&&temp->data!=x)
    {
        prev = temp;
        temp = temp->next;
    }
    if(temp==NULL){cout<<"Data is not find to delete"<<endl; return;}
    prev->next = temp->next;
    free(temp);
}

void deleting(struct Node** root, int x)
{
    struct Node* temp=*root, *prev;
    if(temp!=NULL&&temp->data==x)
    {
        *root = temp->next;
        free(temp);
        return;
    }

    while(temp!=NULL&&temp->data!=x)
    {
        prev = temp;
        temp = temp->next;
    }

    if(temp==NULL){cout<<"Not find"<<endl; return;}
    prev->next = temp->next;
    free(temp);
}

void deleteing1(struct Node** root, int x)
{
    struct Node* temp = *root, *prev;
    if(temp!=NULL&&temp->data==x)
    {
        *root = temp->next;
        free(temp);
        return;
    }

    while(temp!=NULL&&temp->data!=x)
    {
        prev = temp;
        temp = temp->next;
    }

    if(temp==NULL){cout<<"Not find"<<endl; return;}
    prev->next = temp->next;
    free(temp);
}

void Sorting(struct Node**root)
{
    struct Node* current = *root, *index = NULL;
    int temp;

    if(root==NULL)  return;
    else
    {
        while(current!=NULL)
        {
            index = current->next;
            while(index!=NULL)
            {
                if(current->data > index->data)
                {
                    temp = current->data;
                    current->data = index->data;
                    index->data = temp;
                }
                index = index->next;
            }
            current = current->next;
        }
    }
}

void Sorting1(struct Node** root)
{
    struct Node* current = *root, *index = NULL;
    if(root==NULL)  return;
    else 
    {
        while(current!=NULL)
        {
            index = current->next;
            while(index!=NULL)
            {
                if(current->data > index->data)
                {
                    int temp = current->data;
                    current->data = index->data;
                    index->data = temp;
                }
                index = index->next;
            }
            current = current->next;
        }
    }
}

void merging(struct Node* first, struct Node** second)
{
    struct Node* firstRef = first;
    while(firstRef->next!=NULL)
    {
        firstRef = firstRef->next;
    }
    firstRef->next = *second;
}

int main()
{
    int n;
    cout<<"Enter data number: ";
    cin>>n;
    struct Node* head = NULL;
    createNewNode(&head, n);
    cout<<"First List: ";
    traversing(head);

    // Begining(&head, 10);
    // cout<<"After adding at beging: ";
    // traversing(head);

    // searching(head, 50);
    // Deleting(&head, 50);
    // cout<<"After deleting: ";
    // traversing(head);

    // Sorting1(&head);
    // cout<<"After sorting: ";
    // traversing(head);

    struct Node* head1 = NULL;
    int n1;
    cout<<"\nEnter elements number: ";
    cin>>n1;
    createNewNode(&head1, n1);
    cout<<"Second list: ";
    traversing(head1);

    // Sorting(&head1);
    // cout<<"After sorting: ";
    // traversing(head1);

    merging(head, &head1);
    cout<<"\nAfter merging: ";
    traversing(head);
    return 0;
}