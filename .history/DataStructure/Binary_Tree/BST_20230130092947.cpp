#include<bits/stdc++.h>
uisng namespace std;

struct Node{
    int key;
    struct *left, *right;
};

struct Node *newNode(int item){
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    temp->key = item;
    temp->
}