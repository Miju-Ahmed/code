#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

int main()
{
    int n,p,v,t,c=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>p>>v>>t;
        if((p==1&&v==1)||(p==1&&t==1)||(v==1&&t==1))
            c++;
    }
    cout<<c<<endl;
    return 0;
}