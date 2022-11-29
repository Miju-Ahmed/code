#include<stdio.h>
#include<stdlib.h>
typedef struct list_node
{
    int index;
    struct list_node *next;
}list_node;

typedef struct node
{
    int data;
    list_node* head;
}node;

typedef struct graph
{
    int number_of_vertices;
    node heads[];
}graph;

node* new_node(int data)
{
    node* z;
    z = malloc(sizeof(node));
    z->data = data;
    z->head = NULL;
    return z;
}

graph* new_graph(int number_of_vertices)
{
    graph* g = malloc(sizeof(graph)+(number_of_vertices*sizeof(node)));
    g->number_of_vertices = number_of_vertices;
    int i;
    for(i = 0; i<number_of_vertices; i++)
    {
        node* z = new_node(-1);
        g->heads[i] = *z;
    }
    return g;
}

void add_node_to_graph(graph *g, int data)
{
    node* z = new_node(data);
    for(int i=0; i<g->number_of_vertices; i++)
    {
        if(g->he[i].data<0)
        {
            g->heads[i] = *z;
            break;
        }
    }
}

void add_edge(graph* g, int source, int dest)
{
    for(int i=0; i<g->number_of_vertices; i++)
    {
        if(g->heads[i].data == source)
        {
            int dest_index;
            for(int j=0; j<g->number_of_vertices; j++)
            {
                if(g->heads[i].data == dest)
                {
                    dest_index = j;
                    break;
                }
            }
        }
    }
}

