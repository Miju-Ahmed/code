#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

struct Node* Cre(struct Node** root, int n)
{
    int x;
    for(int i=0; i<n; i++)
    {
        struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
        struct Node* last = *root;

        cin>>x;
        temp->data = x;
        temp->next = NULL;

        if(*root == NULL)
            *root = temp;
        else
        {
            while(last!=NULL)
                last = last->next;
            last->next = temp;
        }
    }
}

void Traversing(struct Node* root)
{
    while(root!=NULL)
    {
        cout<<root->data<<" ";
        root = root->next;
    }
    cout<<endl;
}

void Begining(struct Node** root, int x)
{
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = *root;
    *root = temp;
}

void Deleting(struct Node** root, int x)
{
    struct Node* temp = *root, *prev;
    if(temp!=NULL&&temp->data == x)
    {
        *root = temp->next;
        free(temp);
        return;
    }

    while(temp!=NULL && temp->data!=x)
    {
        prev = temp;
        temp = temp->next;
    }

    if(temp == NULL){cout<<"Not find data;"<<endl; return;}
    prev->next = temp->next;
    free(temp);
}

void Sorting(struct Node** root)
{
    struct Node* c = *root, *index = NULL;
    if(root==NULL)  return;

    while(c!=NULL)
    {
        index = c->next;
        while(index!=NULL)
        {
            if(c->data>index->data)
            {
                int temp = c->data;
                c->data = index->data;
                index->data = temp;
            }
            index=index->next;
        }
        c = c->next;
    }
}

void merging(struct Node* f, struct Node** s)
{
    struct Node* fr = f;

    while(fr!=NULL)
        fr = fr->next;
    fr->next = *s;
}

int main()
{
    struct Node* root = NULL;
    int n;
    cin>>n;
    Cre(&root, n);
    cout<<"Data are: ";
    Traversing(root);

    Begining(&root, 40);
    cout<<"Insert Begining: ";
    Traversing(root);

    Deleting(&root, 50);
    cout<<"Deleteing data: ";
    Traversing(root);

    Sorting(&root);
    cout<<"Sorting: ";
    Traversing(root);

    int n1;
    cin>>n1;
    struct Node* root2 = NULL;
    Cre(&root2,n);
    cout<<"Data are: ";
    Traversing(root2);

    merging(root, &root2);
    cout<<"Merging: ";
    Traversing(root);

    return 0;
}