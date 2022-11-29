#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long


void remove(int subset, int x, int n)
{
    subset = (subset ^ (1<<(x-1)));
}

void display(int subset, int n)
{
    for(int bit_no = 0; bit_no<=n; bit_no++)
        if(subset&(1<<bit_no))
            cout<<bit_no+1<<" ";
    cout<<endl;
}

int main()
{
    Faster;
    int s;
    cin>>s;
    int n=16;
    display(s, n);
    remove(s,2,n);
    display(s,n);
    
    return 0;
}