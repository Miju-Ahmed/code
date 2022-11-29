#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[10];
    for(int i=0; i<10; i++)
        cin>>a[i];
    for(int i=0; i<10; i++)
        cout<<a[i]<<" ";
    
    int x;
    cin>>x;
    for(int i=0; i<9; i++)
        if(a[i]==x)
            a[i] = a[i+1];
    for(int i=0; i<9; i++)
        cout<<a[i]<<" ";
    cout<<endl;

    
    return 0;
}