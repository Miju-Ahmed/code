#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
};

void Create(struct Node** head, int n)
{
    int x;
    for(int i=0; i<n; i++)
    {
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        struct Node* last = *head;

        cin>>x;
        newNode->data = x;
        newNode->next = NULL;
        if(*head==NULL)
        {
            *head = newNode;
        }
        else
        {
            while(last!=NULL)
            {
                last = last->next;
            }
            last->next = newNode;

        }
    }
}