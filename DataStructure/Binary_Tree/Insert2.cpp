#include<bits/stdc++.h>
using namespace std;

int tree[50];

int root(int key)
{
    if(tree[0]!='\0')
    {
        cout<<"Root is not null. we can add something in root."<<endl;
    }
    else
    {
        tree[0] = key;
    }
    return 0;
}

int left(int key, int par)
{
    tree[par*2+1] = key;
    return par*2+1;
}

int right(int key, int par)
{
    tree[par*2+2] = key;
    return par*2+2;
}

void print(int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<tree[i]<<" ";
    }
}

int main()
{
    int n;
    cout<<"Enter the amount of node: ";
    cin>>n;
    int x;
    cout<<"Enter the root data: ";
    cin>>x;
    int head1, head2;
    head1 = head2 = root(x);
    cout<<"Enter where you add and node data: "<<endl;
    for(int i=0; i<n; i++)
    {
        char c;
        cin>>x;
        cin>>c;
        if(c=='l')
        {
            head1 = left(x, head1);
        }
        else
        {
            head2 = right(x,head2);
        }
    }

    print(n);
    return 0;
}
