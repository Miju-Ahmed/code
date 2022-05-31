#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int num;
    struct Node *next;
}*stnode;

void CreatNode(int n)
{
    struct Node *fnNode,*tmp;
    int num, i;
    stnode = (struct Node*)malloc(sizeof(struct Node));
    if(stnode==NULL)
        printf("Memory can not be allocated.");
    else{
        printf("Input data for node 1: ");
        scanf("%d",&num);
        stnode->num = num;
        stnode->next = NULL;
        tmp = stnode;
        for(i=2; i<=n; i++)
        {
            fnNode = (struct Node*)malloc(sizeof(struct Node));
            if(fnNode==NULL)
            {
                printf("Memory cant be allocated.");
                break;
            }
            else
            {
                printf("Input data for Node %d : ", i);
                scanf("%d",&num);
                fnNode->num = num;
                fnNode->next = NULL;

                tmp->next = fnNode;
                tmp = tmp->next;
            }
        }
    }
}

void Display()
{
    struct Node* tmp;
    if(stnode==NULL)
    {
        printf("No data available here.");
    }
    else
    {
        tmp = stnode;
        while (tmp!=NULL)
        {
            printf("Data = %d\n",tmp->num);
            tmp = tmp->next;
        }
        
    }
}

int main()
{
    int n;
    printf("\n\nLinked List: To creat and disply singly Linked List : \n");
    printf("-------------------------------\n");
    printf("Input the Number of nodes : ");
    scanf("%d",&n);
    CreatNode(n);
    printf("\nData entered in the list: \n");
    Display();
    return 0;

}