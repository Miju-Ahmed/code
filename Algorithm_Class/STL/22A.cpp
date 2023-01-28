#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    set<int>v;
    for(int i=0; i<n; i++)
    {
        int x;  cin>>x;
        v.insert(x);
    }
    if(v.size()>2)
    {
        cout<<(v.begin()+1)<<endl;
    }
    else
        cout<<"NO"<<endl;
    return 0;
}