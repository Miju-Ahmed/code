#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int value;
    int row_pos;
    int col_pos;
    struct Node* next;
};

void create_new_node(struct Node** start, int nz, int ri, int ci)
{
    struct Node *temp, *r;
    temp = *start;
    if(temp==NULL)
    {
        temp = (struct Node*)malloc(sizeof(struct Node));
        temp->value = nz;
        temp->row_pos = ri;
        temp->col_pos = ci;
        temp->next = NULL;
        *start = temp;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }

        r = (struct Node*)malloc(sizeof(struct Node));
        r->value = nz;
        r->row_pos = ri;
        r->col_pos = ci;
        r->next = NULL;
        temp->next = r;
    }
}

void printList(struct Node* start)
{
    struct Node *temp, *r, *s;
    temp = r = s = start;
    cout<<"Row_position: ";
    while(temp!=NULL)
    {
        cout<<temp->row_pos<<" ";
        temp = temp->next;
    }
    cout<<endl;

    cout<<"Column_position: ";
    while(r!=NULL)
    {
        cout<<r->col_pos<<" ";
        r = r->next;
    }
    cout<<endl;

    cout<<"Value: ";
    while(s!=NULL)
    {
        cout<<s->value<<" ";
        s = s->next;
    }
    cout<<endl;
}

int main()
{
    int sM[4][5] = {
        {0 , 0 , 3 , 0 , 4 },
        {0 , 0 , 5 , 7 , 0 },
        {0 , 0 , 0 , 0 , 0 },
        {0 , 2 , 6 , 0 , 0 }
    };

    struct Node*start = NULL;
    for(int i=0; i<4; i++)
        for(int j=0; j<5; j++)
            if(sM[i][j]!=0)
                create_new_node(&start,sM[i][j], i, j);
    printList(start);
    return 0;
}