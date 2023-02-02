#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int roll;
    char name[20];
    Node *next;
}

void End(Node **head, int data,char na)
{
    Node* new_node = new Node();
    new_node->roll = data;
    new_node->name = na;
}

