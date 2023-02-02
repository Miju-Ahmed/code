#include<stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct node BSTREE;

struct node
{
    int data;
    struct node * left;
    struct node * right;
};

void insert(BSTREE ** root, int number);

 int main()
{

    BSTREE *root = malloc(sizeof *root);
    BSTREE *tmp = malloc(sizeof *root);
    root = NULL;
    int x;
    int input;

    FILE *fp;
    fp=fopen("c:\\test2.txt", "w");


    printf( "Please enter a number: " );
    scanf( "%d", &input );

    for ( x = 0; x < input; x++ )
    {
    insert(&root, x);
    }
    printf("%d", x);
    free(root);

    fclose(fp);

    }

void insert(BSTREE ** root, long int number)
{

    BSTREE *temp = NULL;
    if(!(*root))
    {
        temp = (BSTREE *)malloc(sizeof(BSTREE));
        temp->left = temp->right = NULL;
        temp->data = number;
        *root = temp;
        return;
    }

    if(number < (*root)->data)
    {
        insert(&(*root)->left, number);
        free(root);
    }
    else if(number > (*root)->data)
    {
        insert(&(*root)->right, number);
        free(root);
    }
 free(root);
   }
