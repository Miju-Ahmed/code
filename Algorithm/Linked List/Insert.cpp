#include<bits/stdc++.h>
#include<string.h>
using namespace std;

struct Data
{
    char name[20];
    int year;
    char university[50];
    Data *next;
};

int main()
{
    struct Data* head = NULL;
    struct Data* second = NULL;
    struct Data* third = NULL;
    struct Data* Node[10]= NULL;

    head = (struct Data*)malloc(sizeof(struct Data));
    second = (struct Data*)malloc(sizeof(struct Data));
    third = (struct Data*)malloc(sizeof(struct Data));

    strcpy(head->name,"Nishat Fatima");
    head->year = 1999;
    strcpy(head->university,"East West University");
    head->next = second;

    strcpy(second->name,"Miju Chowdhury");
    second->year = 2000;
    strcpy(second->university,"Rajshahi University");
    second->next = third;

    strcpy(third->name,"Likha");
    third->year = 2002;
    strcpy(third->university,"Nothing");
    third->next = NULL;

    char k[50],u[50];
    int y;

    for(int i=0; i<5; i++)
    {
        cin>>k;
        cin>>y;
        cin>>u;
        Node[i]->name=k;
        Node[i]->year = y;
        Node[i]->university=u;
        Node[i]->next = NULL;
    }

    cout<<"Name : "<<head->name<<"\nYear: "<<head->year<<"\nUniversity : "<<head->university<<endl;
    cout<<"Name : "<<second->name<<"\nYear: "<<second->year<<"\nUniversity : "<<second->university<<endl;
    cout<<"Name : "<<third->name<<"\nYear: "<<third->year<<"\nUniversity : "<<third->university<<endl;

    for(int i=0; i<5; i++)
    {
        cout<<"Name : "<<Node[i]->name<<"\nYear : "<<Node[i]->year<<"\nUniversity : "<<Node[i]->university<<"\n\n";
    }
    return 0;
}


