#include<bits/stdc++.h>
using namespace std;

typedef std::vector<int>vi;
typedef vector<vector<int> >matrix;

struct Node
{
    int value;
    int row_pos;
    int col_pos;
    struct Node* next;
};

void create_new_node(struct Node** start, int nd, int ri, int ci)
{
    struct Node *temp, *r;
    temp = *start;
    if(temp==NULL)
    {
        temp = (struct Node*)malloc(sizeof(struct Node));
        temp->value = nd;
        temp->row_pos = ri;
        temp->col_pos = ci;
        temp->next = NULL;
        *start = temp;
    }
    else
    {
        while(temp->next!=NULL)
            temp = temp->next;
        r = (struct Node*)malloc(sizeof(struct Node));
        r->value = nd;
        r->row_pos = ri;
        r->col_pos = ci;
        r->next = NULL;
        temp->next = r;
    }
}

void PrintMatrix(struct Node* start)
{
    struct Node *r, *c, *v;
    r = c = v = start;
    cout<<"Row position:         [ ";
    while(r!=NULL)
    {
        cout<<r->row_pos<<" ";
        r = r->next;
    }
    cout<<" ]\nColumn position:      [ ";
    while(c!=NULL)
    {
        cout<<c->col_pos<<" ";
        c = c->next;
    }
    cout<<" ]\nThe values are given: [ ";
    while(v!=NULL)
    {
        cout<<v->value<<" ";
        v = v->next;
    }
    cout<<" ]"<<endl;
}

void printMatrix(const matrix& M)
{
    int m = M.size();
    int n = M[0].size();
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++)
            cout<<M[i][j]<<" ";
        cout<<endl;
    }
}

void printVector(const vi& V, char* msg)
{
    cout<<msg<<"[ ";
    for_each(V.begin(), V.end(), [](int a)
    {
        cout<<a<<" ";
    });
    cout<<" ]"<<endl;
}

void spercify(const matrix& M)
{
    int m = M.size();
    int n = M[0].size();
    vi A;
    vi IA = {0};
    vi JA;
    int NNZ=0;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(M[i][j]!=0)
            {
                A.push_back(M[i][j]);
                JA.push_back(j);
                NNZ++;
            }
        }
        IA.push_back(NNZ);
    }

    printMatrix(M);
    printVector(A, (char*)"A = ");
    printVector(IA, (char*)"IA = ");
    printVector(JA, (char*)"JA = ");

}

int main()
{
    matrix M = {
        { 0, 0, 0, 0, 1 },
        { 5, 8, 0, 0, 0 },
        { 0, 0, 3, 0, 0 },
        { 0, 6, 0, 0, 1 }
    };
    
    cout<<"Matrix are ins Vector: \n";
    spercify(M);

    struct Node* start = NULL; 
    cout<<"\n\nSparse matrix is in Linked list: \n";
    for(int i=0; i<4; i++)
        for(int j=0; j<5; j++)
            if(M[i][j]!=0)
                create_new_node(&start, M[i][j], i, j);
    PrintMatrix(start);
    return 0;
}